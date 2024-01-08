/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 14:41:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;

	a = nb;
	if (nb == 0)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	while (a > 1)
	{
		nb = (a - 1) * nb;
		a--;
	}
	return (nb);
}
