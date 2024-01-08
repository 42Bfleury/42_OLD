/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 00:27:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:17:40 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa_base(int nb, int base)
{
	int		i;
	int		negative;
	char	*table;
	char	result[MAX_INT_LENGTH + 1];

	if (base < 2 || base > 36)
		return (NULL);
	i = MAX_INT_LENGTH;
	negative = 0;
	table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (nb < 0)
	{
		negative = 1;
		nb = -nb;
	}
	result[i--] = 0;
	while (nb)
	{
		result[i--] = table[nb % base];
		nb /= base;
	}
	if (negative)
		result[i--] = '-';
	return (ft_strdup(result + i + 1));
}
