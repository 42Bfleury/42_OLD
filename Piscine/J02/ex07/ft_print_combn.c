/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 18:55:24 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:35:23 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	int		t[n];

	if ((n <= 0 || n >= 10) || (i = 0))
		return ;
	while (i++ < n)
		t[i - 1] = i - 1;
	while (t[0] <= (10 - n) && ((j = 0) || 1))
	{
		i = n - 1;
		while (j++ < n)
			ft_putchar('0' + t[j - 1]);
		if (t[0] < (10 - n))
			ft_putstr(", ");
		t[i]++;
		while (i)
			if ((t[i] > (10 - n + i) && (t[--i]++ || 1)) || (i-- && 0))
				t[i + 1] = (t[i] < (11 - n + i)) ? (t[i] + 1) : (t[i - 1] + 3);
		while (++i < n)
			t[i] = (t[i] > 10 - n + i) ? t[i - 1] + 1 : t[i];
	}
}
