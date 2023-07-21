/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:35:36 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 22:44:29 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int nb_param, char **list)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < nb_param)
	{
		j = i;
		while (++j < nb_param)
		{
			if (ft_strcmp(list[i], list[j]) > 0)
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ft_sort_params(ac, av);
	while (i < ac)
		ft_putstr(av[i++]);
	return (0);
}
