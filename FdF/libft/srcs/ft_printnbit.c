/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:07:01 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:55 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_printnbit(long n, size_t size, size_t count, char c)
{
	size_t	i;
	char	bits[64];

	i = 0;
	while (i++ < size)
		bits[i - 1] = (n >> (i - 1) & 1) ? '1' : '0';
	while (--i)
	{
		if (i < (size - 1) && !(i % count))
			ft_putchar(c);
		ft_putchar(bits[i - 1]);
	}
}
