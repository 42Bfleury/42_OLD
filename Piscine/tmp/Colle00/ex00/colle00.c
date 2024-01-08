/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 13:02:50 by gperon            #+#    #+#             */
/*   Updated: 2015/09/06 23:39:21 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_build(int x, int flag)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			(flag) ? ft_putchar('o') : ft_putchar('|');
		else
			(flag) ? ft_putchar('-') : ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
				ft_build(x, 1);
			else
				ft_build(x, 0);
			i++;
		}
	}
}
