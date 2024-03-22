/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 06:06:12 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:17:45 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstappend(t_list **alst, t_list *elem)
{
	t_list	*tmp;

	tmp = *alst;
	if (alst && elem)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
	}
}
