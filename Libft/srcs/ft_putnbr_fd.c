/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 05:42:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:06 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb;

	if (fd > 0)
	{
		nb = n;
		if (nb < 0 && (nb = -nb))
			ft_putchar_fd('-', fd);
		if (nb >= 10)
			ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd('0' + (nb % 10), fd);
	}
}
