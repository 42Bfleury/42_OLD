/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:10:46 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 16:55:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_upper_hexa(unsigned long nb)
{
	int		length;
	char	*str;

	str = ft_ultoa_base(nb, 16);
	ft_putstr(str);
	length = ft_strlen(str);
	free(str);
	return (length);
}

int		ft_print_lower_hexa(unsigned long nb)
{
	int		length;
	char	*str;

	str = ft_strlower(ft_ultoa_base(nb, 16));
	ft_putstr(str);
	length = ft_strlen(str);
	free(str);
	return (length);
}

int		ft_print_hexa_pointer(unsigned long nb)
{
	int		length;
	char	*str;

	str = ft_strlower(ft_ultoa_base(nb, 16));
	ft_putstr("0x");
	ft_putstr(str);
	length = ft_strlen(str) + 2;
	free(str);
	return (length);
}
