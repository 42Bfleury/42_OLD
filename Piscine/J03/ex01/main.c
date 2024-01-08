/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 16:33:20 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 00:45:00 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		*g_ptr1;
int		**g_ptr2;
int		***g_ptr3;
int		****g_ptr4;
int		*****g_ptr5;
int		******g_ptr6;
int		*******g_ptr7;
int		********g_ptr8;
int		*********g_ptr9;

int		ft_str_is_numeric(char *str)
{
	while (*str++)
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9'))
			return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int		result;
	int		negative;

	result = 0;
	while (*str == '\v' || *str == '\t' || *str == '\f'
			|| *str == '\r' || *str == '\n' || *str == ' ')
		str++;
	if ((negative = 0) || *str == '-' || *str == '+')
		negative = ((*str++ == '-') ? 1 : 0);
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - '0');
	return ((negative) ? -result : result);
}

void	test(int n)
{
	g_ptr1 = &n;
	g_ptr2 = &g_ptr1;
	g_ptr3 = &g_ptr2;
	g_ptr4 = &g_ptr3;
	g_ptr5 = &g_ptr4;
	g_ptr6 = &g_ptr5;
	g_ptr7 = &g_ptr6;
	g_ptr8 = &g_ptr7;
	g_ptr9 = &g_ptr8;
	printf("n = %i\n\nft_ultimate_ft(g_ptr9)\n", n);
	ft_ultimate_ft(g_ptr9);
	printf("\nn = %i\n", n);
}

int		main(int ac, char *av[])
{
	int		n;

	if (ac == 1)
	{
		n = 5;
		test(n);
		return (0);
	}
	else if (ac == 2 && ft_str_is_numeric(av[1]))
	{
		n = ft_atoi(av[1]);
		test(n);
		return (0);
	}
	return (1);
}
