/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:47:23 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/01 14:30:33 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int			length;
	va_list		arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	length = ft_parse_format(format, arg);
	va_end(arg);
	return (length);
}
