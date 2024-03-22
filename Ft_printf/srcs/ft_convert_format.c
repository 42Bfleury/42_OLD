/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:09:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/01 17:03:44 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		convert_int(char format, int nb)
{
	if (format == 'c' || format == '%')
	{
		if (format == '%')
			ft_putchar(format);
		else
			ft_putchar(nb);
		return (1);
	}
	else if (format == 'i' || format == 'd')
		return (ft_print_int(nb));
	return (0);
}

static int		convert_ulong(char format, unsigned long nb)
{
	if (format == 'o' || format == 'O')
		return (ft_print_octal(nb));
	else if (format == 'p')
		return (ft_print_hexa_pointer(nb));
	else if (format == 'u' || format == 'U')
		return (ft_print_uint(nb));
	else if (format == 'x')
		return (ft_print_lower_hexa(nb));
	else if (format == 'X')
		return (ft_print_upper_hexa(nb));
	return (0);
}

static int		convert_str(char format, char *str)
{
	if (format == 's')
	{
		ft_putstr(str);
		return (ft_strlen(str));
	}
	return (0);
}

int				ft_convert_format(const char **format, va_list arg)
{
	int		length;

	length = 0;
	if (**format == '%')
	{
		ft_putchar('%');
		length++;
	}
	else if (**format == 'i' || **format == 'c' || **format == 'C'
	|| **format == 'd' || **format == 'D')
		length = convert_int(**format, va_arg(arg, int));
	else if (**format == 'o' || **format == 'O' || **format == 'p'
	|| **format == 'x' || **format == 'X' || **format == 'u' || **format == 'U')
		length = convert_ulong(**format, va_arg(arg, unsigned long));
	else if (**format == 's' || **format == 'S')
		length = convert_str(**format, va_arg(arg, char*));
	else if (**format == 'a' || **format == 'A' || **format == 'g'
	|| **format == 'G' || **format == 'e' || **format == 'E' || **format == 'n')
		;
	else if (**format == 'f' || **format == 'F')
		length = ft_print_float(va_arg(arg, double));
	return (length);
}
