/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:43:59 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 19:56:40 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%i | %i\n",strcmp("Test","test"),ft_strcmp("Test","test"));
	printf("%i | %i\n",strcmp("Test","Test"),ft_strcmp("Test","Test"));
	printf("%i | %i\n",strcmp("test","Test"),ft_strcmp("test","Test"));
	printf("%i | %i\n",strcmp("","Test"),ft_strcmp("","Test"));
	printf("%i | %i\n",strcmp("test",""),ft_strcmp("test",""));
	printf("%i | %i\n",strcmp("",""),ft_strcmp("",""));
	return (0);
}*/
