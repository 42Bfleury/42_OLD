/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 06:17:47 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:16:57 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		negative;

	i = 0;
	result = 0;
	negative = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		negative = (str[i++] == '-') ? 1 : 0;
	while (ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	if (negative)
		return (-result);
	return (result);
}
