/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 15:28:28 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 15:35:09 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_params(int ac, char *av[])
{
	int		i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
		{
			while (*av[i]++)
				ft_putchar(*(av[i] - 1));
			ft_putchar('\n');
		}
}

int		main(int ac, char *av[])
{
	ft_print_params(ac, av);
	return (0);
}
