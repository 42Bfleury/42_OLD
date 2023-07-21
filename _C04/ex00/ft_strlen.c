/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:48:16 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/14 07:52:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n",ft_strlen(""));
	printf("%i\n",ft_strlen("Test42"));
	printf("%i\n",ft_strlen("_Test 42!\n"));
	return (0);
}*/
