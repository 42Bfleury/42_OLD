/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 15:39:04 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 15:41:25 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_rev_params(int ac, char *av[])
{
	if (ac > 1)
		while (--ac > 0)
		{
			while (*av[ac]++)
				ft_putchar(*(av[ac] - 1));
			ft_putchar('\n');
		}
}

int		main(int ac, char *av[])
{
	ft_rev_params(ac, av);
	return (0);
}
