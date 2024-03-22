/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:57:55 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:43 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_ultoa_base(unsigned long nb, int base)
{
	int		i;
	char	*table;
	char	result[MAX_LONG_LENGTH + 1];

	if (base < 2 || base > 36)
		return (NULL);
	i = MAX_INT_LENGTH;
	table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	result[i--] = 0;
	while (nb)
	{
		result[i--] = table[nb % base];
		nb /= base;
	}
	return (ft_strdup(result + i + 1));
}
