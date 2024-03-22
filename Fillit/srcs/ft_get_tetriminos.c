/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetriminos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 04:48:10 by bfleury           #+#    #+#             */
/*   Updated: 2016/06/09 07:49:44 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>

int		ft_get_tetriminos(char *file_path, t_list *tetriminos)
{
	int				i;
	int				fd;
	char			c[1];
	unsigned short	tetrimino;

	c[0] = '\n';
	tetrimino = 0;
	if ((fd = open(file_path, O_RDONLY)) > -1)
	{
		while ((i = (tetrimino) ? read(fd, c, 1) : 1))
		{
			if (!(tetrimino = ft_get_tetrimino(fd)) || c[0] != '\n')
				return(0);
			if (tetriminos)
				ft_lsthappen(&tetriminos, ft_lstnew(&tetrimino, 1));
			else
				tetriminos = ft_lstnew(&tetrimino, 1);
		}
		close(fd);
		return (1);
	}
	return (0);
}



//void	print_list(t_list *list)
//{
	//while (list)
	//{
		//printf("%hu\n", list->content);
		//list = list->next;
	//}
//}



int		main(int ac, char **av)
{
	t_list	*tetriminos;

	tetriminos = NULL;
	if (ac == 2 && ft_get_tetriminos(av[1], tetriminos))
	{
		//print_list(tetriminos);
		ft_putendl("Valid tetriminos!");
		return (0);
	}
	ft_puterror();
}
