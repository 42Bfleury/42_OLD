/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:03:38 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/01 14:36:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_parse_format(const char *format, va_list arg)
{
	int		length;

	length = 0;
	while (*format)
	{
		if (*format == '%' && format++)
			length += ft_convert_format(&format, arg);
		else
		{
			ft_putchar(*format);
			length++;
		}
		format++;
	}
	return (length);
}
