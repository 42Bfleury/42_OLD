/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 16:23:49 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 17:45:35 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i++])
		dest[i - 1] = src[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}

void	ft_sort_params(int ac, char *av[])
{
	int		i;
	char	tmp[1000];

	i = 1;
	while (i < ac - 1)
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_strcpy(tmp, av[i]);
			ft_strcpy(av[i], av[i + 1]);
			ft_strcpy(av[i + 1], tmp);
			i = 1;
		}
		else
			i++;
}

int		main(int ac, char *av[])
{
	int		i;

	i = 0;
	ft_sort_params(ac, av);
	while (++i < ac)
	{
		while (*av[i]++)
			ft_putchar(*(av[i] - 1));
		ft_putchar('\n');
	}
	return (0);
}
