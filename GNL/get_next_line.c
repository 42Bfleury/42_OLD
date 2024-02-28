/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 00:46:39 by bfleury           #+#    #+#             */
/*   Updated: 2016/12/11 02:16:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_gnl	*new_elem(int fd)
{
	t_gnl	*e;

	if (!(e = (t_gnl*)ft_memalloc(sizeof(t_gnl))))
		return (NULL);
	e->fd = fd;
	e->prev = NULL;
	e->next = NULL;
	if (!(e->data = ft_strnew(0)))
		return (NULL);
	return (e);
}

static t_gnl	*check_lst(t_gnl *f, int fd)
{
	t_gnl	*e;
	t_gnl	*l;

	e = f;
	while (e)
	{
		if ((l = e) && e->fd == fd)
			return (e);
		e = e->next;
	}
	l->next = new_elem(fd);
	l->next->prev = l;
	return (l->next);
}

static int		check_buffer(char *b, t_gnl *e, char **l)
{
	char	*tmp;

	if (e->data && ((b && (tmp = ft_strchr(b, '\n')))
		|| (tmp = ft_strchr(e->data, '\n'))))
	{
		*tmp = 0;
		*l = (b) ? ft_strjoin(e->data, b) : ft_strdup(e->data);
		tmp = ft_strdup(tmp + 1);
		free(e->data);
		e->data = tmp;
		return (1);
	}
	if (b)
	{
		tmp = e->data;
		e->data = ft_strjoin(e->data, b);
		free(tmp);
		ft_bzero(b, GNL_BUFF_SIZE);
	}
	return (0);
}

static int		del_elem(t_gnl *e, char **l)
{
	if (e->data && *e->data)
	{
		*l = ft_strdup(e->data);
		ft_strdel(&e->data);
		return (1);
	}
	if (e->prev)
		e->prev->next = e->next;
	if (e->next)
		e->next->prev = e->prev;
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*f = NULL;
	t_gnl			*e;
	int				nb;
	char			b[GNL_BUFF_SIZE + 1];

	if (fd < 0 || !line || !(f = (f) ? f : new_elem(fd)))
		return (-1);
	e = check_lst(f, fd);
	if (check_buffer(NULL, e, line))
		return (1);
	ft_bzero(b, GNL_BUFF_SIZE + 1);
	while ((nb = read(fd, b, GNL_BUFF_SIZE)))
	{
		if (nb < 0)
			return (-1);
		if (check_buffer(b, e, line))
			return (1);
	}
	return (del_elem(e, line));
}
