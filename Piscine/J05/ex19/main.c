/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 16:13:50 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 16:20:40 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	printf("ft_print_non_printable(Coucou\\ntu vas bien ?) => \n");
	ft_print_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	return (0);
}
