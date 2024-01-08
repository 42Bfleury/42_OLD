/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 05:38:35 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:00 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl_fd(const char *str, int fd)
{
	if (str && fd > 0)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
