/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:26:29 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:03 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putfloat_fd(float d, int fd)
{
	int		i;

	if (fd > 0)
	{
		i = 0;
		ft_putnbr_fd((int)d, fd);
		d -= (int)d;
		ft_putchar_fd('.', fd);
		if (d < 0)
			d = -d;
		if (d)
		{
			while (i++ < 6)
				d *= 10;
			ft_putnbr_fd(d, fd);
		}
		else
			ft_putstr_fd("000000", fd);
	}
}
