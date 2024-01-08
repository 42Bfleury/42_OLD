/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 03:10:16 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 12:35:54 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_atoi(char *str)
{
	int		result;
	int		negative;

	result = 0;
	while (*str == '\v' || *str == '\t' || *str == '\f'
			|| *str == '\r' || *str == '\n' || *str == ' ')
		str++;
	if ((negative = 0) || *str == '-' || *str == '+')
		negative = ((*str++ == '-') ? 1 : 0);
	while (*str >= '0' && *str <= '9')
		result = ((result * 10) + (*str++ - '0'));
	return ((negative) ? -result : result);
}
