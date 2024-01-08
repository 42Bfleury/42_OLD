/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 02:35:20 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:19 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strupper(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 'a' + 'A';
		ptr++;
	}
	return (str);
}
