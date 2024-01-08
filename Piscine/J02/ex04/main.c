/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 12:12:01 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 12:18:23 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	ft_putstr("ft_print_comb() :\n");
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
