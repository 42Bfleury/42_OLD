/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 20:15:10 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 20:35:17 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

int				*ft_range(int min, int max)
{
	int		i;
	int		*result;

	if (min >= max || !(result = (int*)malloc(sizeof(int) * ft_abs(max - min))))
		return (NULL);
	i = 0;
	while (i++ < ft_abs(max - min))
		result[i - 1] = (min + i - 1);
	return (result);
}
