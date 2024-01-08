/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 19:55:16 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 20:05:35 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	*str;

	str = "Hello World!";
	printf("ft_strdup(%s) => %s\n", str, ft_strdup(str));
	printf("strdup(%s) => %s\n", str, strdup(str));
	return (0);
}
