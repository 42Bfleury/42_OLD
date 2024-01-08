/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clguizol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:27:44 by clguizol          #+#    #+#             */
/*   Updated: 2015/09/13 23:02:05 by clguizol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int				check_col(char *tab, char value)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int				check_line(char **tab, int j, char value)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i][j] == value)
			return (1);
		i++;
	}
	return (0);
}

int				check_square(char **tab, int i, int j, char value)
{
	int line;
	int col;

	line = 3 * (i / 3);
	col = 3 * (j / 3);
	i = line;
	while (i < line + 3)
	{
		j = col;
		while (j < col + 3)
		{
			if (tab[i][j] == value)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char			ft_resolve_point(char **tab, int i, int j)
{
	char		value;

	value = '1';
	while (value <= '9')
	{
		if (!(check_square(tab, i, j, value) &&
			check_line(tab, j, value) && check_col(tab[i], value)))
			return (value);
		value++;
	}
	return ('.');
}

void			ft_resolve(char **tab)
{
	int			i;
	int			j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '.')
				tab[i][j] = ft_resolve_point(tab, i, j);
			j++;
		}
		i++;
	}
	ft_print_tab(tab);
}
