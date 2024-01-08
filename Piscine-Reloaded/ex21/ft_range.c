/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 14:39:10 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*yolo;
	int		i;

	if (min >= max)
		return (NULL);
	yolo = (int*)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (i != max - min)
	{
		yolo[i] = min + i;
		i++;
	}
	yolo[i] = '\0';
	return (yolo);
}
