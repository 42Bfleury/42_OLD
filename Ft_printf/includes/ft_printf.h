/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:48:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/01 17:26:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_parse_format(const char *format, va_list arg);
int				ft_convert_format(const char **format, va_list arg);

int				ft_print_int(int nb);
int				ft_print_octal(long nb);
int				ft_print_float(double nb);
int				ft_print_lower_expo(long nb);
int				ft_print_upper_expo(long nb);
int				ft_print_uint(unsigned int nb);
int				ft_print_upper_hexa(unsigned long nb);
int				ft_print_lower_hexa(unsigned long nb);
int				ft_print_hexa_pointer(unsigned long nb);

#endif
