/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:08:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:23 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = (void*)malloc(size)))
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
