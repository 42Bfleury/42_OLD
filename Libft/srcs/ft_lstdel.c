/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 02:37:56 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:17:55 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nxtlst;

	while (*alst)
	{
		nxtlst = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = nxtlst;
	}
	*alst = NULL;
}
