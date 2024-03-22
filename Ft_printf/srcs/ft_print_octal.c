/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_octal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:16:01 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 16:53:15 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_octal(long nb)
{
	int		length;
	char	*str;

	str = ft_ltoa_base(nb, 8);
	ft_putstr(str);
	length = ft_strlen(str);
	free(str);
	return (length);
}
