/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:17:52 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 16:16:50 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_int(int nb)
{
	ft_putnbr(nb);
	return (ft_intlen(nb));
}

int		ft_print_uint(unsigned int nb)
{
	char	*str;

	str = ft_uitoa(nb);
	ft_putstr(str);
	free(str);
	return (ft_uintlen(nb));
}
