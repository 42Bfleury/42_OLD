/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 22:28:43 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/24 23:32:13 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../H/bsq.h"

void		ft_display_map(char *buffer, t_mapinfo *map_info)
{
	int		coord[2]
	int		ret;

	coord[1] = 0;
	while ((ret = read(map_info->fd, buffer, map_info->nb_column + 1)) > 0)
	{
		
	}
}
