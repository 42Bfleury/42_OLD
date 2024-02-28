/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:59:20 by bfleury           #+#    #+#             */
/*   Updated: 2016/12/11 02:16:35 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define GNL_BUFF_SIZE		512

# include "../Libft/includes/libft.h"

typedef struct				s_gnl
{
	int						fd;
	char					*data;
	struct s_gnl			*prev;
	struct s_gnl			*next;
}							t_gnl;

int							get_next_line(const int fd, char **line);

#endif
