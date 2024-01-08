/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:01:39 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 02:58:29 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	char *str;

	str = "C'est qui le patron ?";
	ft_print_memory(str, 160);
	return (0);
}
