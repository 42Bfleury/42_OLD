/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:40:12 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:34 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_uintlen(unsigned int n)
{
	int result;

	if (n > 0)
		result = 0;
	else
		result = 1;
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}
