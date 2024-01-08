/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:23:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:44 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_wordlen(const char *s, char c)
{
	int		result;

	result = 0;
	while (*s && *s++ != c)
		result++;
	return (result);
}
