/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 11:37:50 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:55:43 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(void)
{
	int		i;

	i = -1;
	ft_putstr("ft_is_negative(-1) => ");
	ft_is_negative(i);
	ft_putstr("\n\n\n///////////////////////////////////\n\n\n");
	i = 0;
	ft_putstr("ft_is_negative(0) => ");
	ft_is_negative(i);
	ft_putstr("\n\n\n///////////////////////////////////\n\n\n");
	i = 1;
	ft_putstr("ft_is_negative(1) => ");
	ft_is_negative(i);
	ft_putchar('\n');
	return (0);
}
