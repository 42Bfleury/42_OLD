/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 15:09:12 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 15:25:20 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_program_name(char *name)
{
	while (*name++)
		ft_putchar(*(name - 1));
	ft_putchar('\n');
}

int		main(int ac, char *av[])
{
	if (ac)
		ft_print_program_name(av[0]);
	return (0);
}
