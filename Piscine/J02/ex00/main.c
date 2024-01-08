/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 11:09:05 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 12:01:10 by Bfleury          ###   ########.fr       */
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
	ft_putstr("ft_print_alphabet() => ");
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
