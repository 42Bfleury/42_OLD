/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 23:11:15 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = NULL;
	if ((str = ft_strnew(ft_strlen(s))))
		ft_strcpy(str, s);
	return (str);
}
