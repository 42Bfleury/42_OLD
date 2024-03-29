/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 03:09:56 by bfleury           #+#    #+#             */
/*   Updated: 2016/06/08 10:12:35 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_solve(char *file_path)
{
	if (ft_get_result(file_path))
	{
		return (1);
	}
	ft_puterror();
	return (0);
}
