/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 06:24:16 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 20:07:48 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hexa(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[(c / 16)], 1);
	write(1, &base[(c % 16)], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (31 < str[i] && str[i] < 127)
			write(1, &str[i], 1);
		else
			ft_put_hexa(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("-Test :");
	write(1, "\n", 1);
	ft_putstr_non_printable("\a\b\t\n\v\f\r Ceci est un test !");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	return (0);
}*/
