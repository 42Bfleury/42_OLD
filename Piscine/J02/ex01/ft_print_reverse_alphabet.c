/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:17:20 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:30:11 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c-- >= 'a')
		ft_putchar(c + 1);
}
