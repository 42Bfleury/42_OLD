/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 15:59:15 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:35:27 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	int		i;

	i = 0;
	while (i++ < 9)
	{
		if (i > 1)
			ft_putstr("\n\n\n");
		ft_putstr("ft_print_combn(");
		ft_putchar('0' + i);
		ft_putstr(") :\n\n");
		ft_print_combn(i);
	}
	ft_putchar('\n');
	return (0);
}
