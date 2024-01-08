/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:01:51 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 02:43:17 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void		ft_putnbr_base(long nbr, char *base)
{
	int		b;

	b = 0;
	while (base[b++])
		;
	if (--b > 2)
	{
		if (nbr <= -b || b <= nbr)
			ft_putnbr_base((nbr / b), base);
		ft_putchar((nbr > 0) ? base[nbr % b] : base[0]);
	}
}

static void		ft_print_hex_addr(void *addr)
{
	long	i;

	i = 0x10000000;
	while ((long)addr < (i /= 0x10))
		ft_putchar('0');
	ft_putnbr_base((long)addr, "0123456789abcdef");
}

static void		ft_print_hex_content(char *addr, int size)
{
	int		i;

	i = 0;
	while (i++ < 0x10)
	{
		if (i % 2)
			ft_putchar(' ');
		if (i <= size)
		{
			if (-0x10 < *(addr + i - 1) && *(addr + i - 1) < 0x10)
				ft_putchar('0');
			ft_putnbr_base(*(addr + i - 1), "0123456789abcdef");
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
	}
}

static void		ft_print_printable_content(char *addr, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i++ < 0x10)
	{
		c = *(addr + i - 1);
		if (i <= size)
			ft_putchar((31 < c && c < 127) ? c : '.');
	}
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	while (size > 0)
	{
		ft_print_hex_addr(addr);
		ft_putchar(':');
		ft_print_hex_content(addr, size);
		ft_putchar(' ');
		ft_print_printable_content(addr, size);
		ft_putchar('\n');
		size = ((size >= 0x10) ? (size - 0x10) : 0);
		addr += 0x10;
	}
	return (addr);
}
