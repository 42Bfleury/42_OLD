/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 01:14:17 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:07 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;
	void	*data;

	if (!(ptr = (t_list*)malloc(sizeof(t_list) * 1)))
		return (NULL);
	ptr->next = NULL;
	if (!content)
	{
		ptr->content = NULL;
		ptr->content_size = 0;
	}
	else
	{
		if (!(data = malloc(sizeof(content) * content_size)))
			return (NULL);
		ptr->content = ft_memcpy(data, content, content_size);
		ptr->content_size = content_size;
	}
	return (ptr);
}
