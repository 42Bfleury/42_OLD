/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcherif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:33:53 by lcherif           #+#    #+#             */
/*   Updated: 2023/07/02 23:35:24 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne(int pos, int x, int y, int etage)
{
	if (etage == 1 || etage == y)
	{
		if (pos == 1 || pos == x)
		{
			if (etage == 1)
				ft_putchar('A');
			else
				ft_putchar('C');
		}
		else
			ft_putchar('B');
	}
	else
	{
		if (pos == 1 || pos == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	etage;
	int	pos;

	if (x <= 0 || y <= 0)
		return ;
	etage = 1;
	while (etage <= y)
	{
		pos = 1;
		while (pos <= x)
		{
			ligne(pos, x, y, etage);
			pos++;
		}
		ft_putchar('\n');
		etage++;
	}
}
