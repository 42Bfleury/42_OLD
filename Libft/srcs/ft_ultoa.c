/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:55:17 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:40 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_ultoa(unsigned long n)
{
	int		i;
	char	*result;

	i = ft_ulonglen(n);
	if (!(result = ft_strnew(i--)))
		return (NULL);
	if (n <= 0)
		result[0] = (n == 0) ? '0' : '-';
	while (n)
	{
		result[i--] = '0' + (n % 10);
		n /= 10;
	}
	return (result);
}
