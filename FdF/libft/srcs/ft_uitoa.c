/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:45:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:35 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_uitoa(unsigned int n)
{
	int		i;
	char	*result;

	i = ft_uintlen(n);
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
