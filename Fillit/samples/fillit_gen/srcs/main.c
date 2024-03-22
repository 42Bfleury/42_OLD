/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:07:20 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/29 05:14:15 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit_gen.h"

int		main(int ac, char **av)
{
	t_list	*list;
	int		*index;
	int		nb_tetriminos;

	if (ac == 2)
	{
		nb_tetriminos = ft_atoi(av[1]);
		if (nb_tetriminos >= 1 && nb_tetriminos <= 26)
		{
			list = ft_get_tetriminos();
			index = ft_pickrand(0, 113, nb_tetriminos);
			ft_print_tetriminos(list, index, nb_tetriminos);
			free(list);
			list = NULL;
			free(index);
			index = NULL;
		}
		else
		{
			ft_putendl("Valeur de l'argument non compris entre 1 et 26.");
			return (1);
		}
	}
	else
	{
		ft_putendl("Nombre d'arguments différent de 1.");
		return (1);
	}
	return (0);
}
