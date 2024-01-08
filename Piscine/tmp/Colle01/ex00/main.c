/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clguizol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:27:54 by clguizol          #+#    #+#             */
/*   Updated: 2015/09/13 21:01:36 by clguizol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				ft_print_tab(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char				**ft_check_carac(char **argv)
{
	int		i;
	int		c;
	int		l;
	char	**tmp;

	i = 1;
	l = 0;
	if (!(tmp = ((char **)malloc(sizeof(char *) * 9))))
		return (NULL);
	while (argv[i])
	{
		c = 0;
		if (!(tmp[l] = ((char *)malloc(sizeof(char) * 9))))
			return (NULL);
		while (argv[i][c] == '.' || (argv[i][c] >= '1' && argv[i][c] <= '9'))
		{
			tmp[l][c] = argv[i][c];
			c++;
		}
		if (c != 9 || ft_strlen(argv[i]) != 9)
			return (NULL);
		i++;
		l++;
	}
	return (tmp);
}

int					main(int argc, char **argv)
{
	char	**tab;

	if (argc == 10)
	{
		if (!(tab = ft_check_carac(argv)))
			write(1, "Erreur\n", 7);
		else
			ft_resolve(tab);
	}
	else
		write(1, "Erreur\n", 7);
	return (0);
}
