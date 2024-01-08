/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 14:40:27 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int			main(int argc, char **argv)
{
	int		yolo;
	char	c;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	yolo = open(argv[1], O_RDONLY);
	while (read(yolo, &c, 1) != 0)
		write(1, &c, 1);
	close(yolo);
	return (0);
}
