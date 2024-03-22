/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 00:46:39 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 05:29:54 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

static t_gnl	*gnl_create(t_gnl *gnl, int fd)
{
	if (!gnl)
	{
		if (!(gnl = (t_gnl *)malloc(sizeof(t_gnl) * 1)))
			return ((t_gnl *)NULL);
		gnl->s = ft_strnew(0);
		gnl->fd = fd;
		gnl->next = NULL;
		gnl->t = NULL;
	}
	gnl->r = 1;
	gnl->i = 0;
	ft_strdel(&gnl->t);
	return (gnl);
}

static t_gnl	*gnl_choose(int fd, t_gnl *root2)
{
	static t_gnl		*root;
	t_gnl				*gnl;
	t_gnl				*new;

	if (fd == -10)
		return (root);
	if (fd == -50)
		return ((root = (t_gnl *)NULL));
	if (fd == -20)
		return (root = root2);
	if (!(root = gnl_create(root, fd)))
		return ((t_gnl *)NULL);
	gnl = root;
	while (gnl->fd != fd && gnl->next)
		gnl = gnl->next;
	if (gnl->fd != fd && !(new = NULL))
	{
		if (!(new = gnl_create(NULL, fd)))
			return ((t_gnl *)NULL);
		gnl->next = new;
		return (new);
	}
	gnl = gnl_create(gnl, fd);
	return (gnl);
}

static int		gnl_delete(t_gnl *erase)
{
	t_gnl		*root;
	t_gnl		*tmp;
	t_gnl		*prev;
	t_gnl		*next;

	root = gnl_choose(-10, NULL);
	next = root->next;
	prev = NULL;
	tmp = root;
	while (tmp->fd != erase->fd)
	{
		prev = tmp;
		tmp = prev->next;
		next = tmp->next;
	}
	if (prev)
		prev->next = next;
	else
		gnl_choose(-20, next);
	ft_strdel(&erase->s);
	ft_memdel((void **)&erase);
	return (0);
}

static int		gnl_free(void)
{
	t_gnl		*root;
	t_gnl		*destroy;

	if (!(root = gnl_choose(-10, NULL)))
		return (0);
	while (root->next)
	{
		destroy = root;
		root = root->next;
		ft_strdel(&destroy->s);
		ft_strdel(&destroy->t);
		ft_memdel((void **)&destroy);
	}
	ft_strdel(&root->s);
	ft_strdel(&root->t);
	ft_memdel((void **)&root);
	gnl_choose(-50, NULL);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	t_gnl		*g;

	if (fd == -10)
		return (gnl_free());
	if (fd < 0 || !(line) || BUFF_SIZE < 1 || !(g = gnl_choose(fd, NULL)) ||
		read(fd, g->b, 0) < 0)
		return (-1);
	while (!(ft_strchr(g->s, '\n')) && (g->r = read(fd, g->b, BUFF_SIZE)) > 0)
	{
		g->t = g->s;
		if (!(g->b[g->r] = '\0'))
			g->s = ft_strjoin(g->t, g->b);
		ft_strdel(&g->t);
	}
	while (g->s[g->i] && g->s[g->i] != '\n' && g->s[g->i] != '\0')
		g->i++;
	if (g->r == 0 && g->i == 0)
		return (gnl_delete(g));
	*line = ft_strsub(g->s, 0, (g->i));
	g->t = g->s;
	g->s = (g->t[g->i] == '\0') ? ft_strnew(0) : ft_strsub(g->t,
	(g->i + 1), (ft_strlen(g->t) - g->i));
	return (1);
}
