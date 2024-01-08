/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 14:41:29 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb > 12) || (nb < 0))
		return (0);
	if (nb == 0)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
