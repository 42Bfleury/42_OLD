/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:44:09 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/18 03:57:58 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hexa(long nbr)
{
	long	b;
	char	*base;

	b = 16;
	base = "0123456789abcdef";
	if (b <= nbr)
		ft_put_hexa((nbr / b));
	write(1, &base[nbr % b], 1);
}

void	ft_print_hex_addr(void *addr)
{
	long int	i;

	i = 0x1000000000000000;
	while ((long)addr < i)
	{
		write(1, "0", 1);
		i /= 0x10;
	}
	ft_put_hexa((long)addr);
}

void	ft_print_hex_content(unsigned char *addr, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (i < 0x10)
	{
		if (!(i % 2))
			write(1, " ", 1);
		if (i < size)
		{
			if (addr[i] < 0x10)
				write(1, "0", 1);
			ft_put_hexa(addr[i]);
		}
		else
			write(1, "  ", 2);
		i++;
	}
}

void	ft_print_content(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 0x10 && i < size)
	{
		if (32 <= addr[i] && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*ptr;

	ptr = addr;
	while (size > 0)
	{
		ft_print_hex_addr(ptr);
		write(1, ":", 1);
		ft_print_hex_content(ptr, size);
		write(1, " ", 1);
		ft_print_content(ptr, size);
		write(1, "\n", 1);
		if (size >= 0x10)
			size -= 0x10;
		else
			size = 0;
		ptr += 0x10;
	}
	return (addr);
}
/*
#include <stdio.h>
int		main(void)
{
	char *str = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut 
	faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	printf("\n%p: %p\n", str, ft_print_memory(str, 92));
	return (0);
}*/
