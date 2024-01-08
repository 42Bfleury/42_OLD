/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 05:24:34 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:00:14 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
