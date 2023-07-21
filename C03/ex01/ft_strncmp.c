/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:43:59 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 19:56:52 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
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
	printf("%i | %i\n",strncmp("test","test",2),ft_strncmp("test","test",2));
	printf("%i | %i\n",strncmp("test","test",5),ft_strncmp("test","test",5));
	printf("%i | %i\n",strncmp("test","test",7),ft_strncmp("test","test",7));
	printf("%i | %i\n",strncmp("tesT","test",2),ft_strncmp("tesT","test",2));
	printf("%i | %i\n",strncmp("tesT","test",5),ft_strncmp("tesT","test",5));
	printf("%i | %i\n",strncmp("tesT","test",7),ft_strncmp("tesT","test",7));
	printf("%i | %i\n",strncmp("test","tesT",2),ft_strncmp("test","tesT",2));
	printf("%i | %i\n",strncmp("test","tesT",5),ft_strncmp("test","tesT",5));
	printf("%i | %i\n",strncmp("test","tesT",7),ft_strncmp("test","tesT",7));
	printf("%i | %i\n",strncmp("test","tesT",0),ft_strncmp("test","tesT",0));
	printf("%i | %i\n",strncmp("","tesT",7),ft_strncmp("","tesT",7));
	printf("%i | %i\n",strncmp("test","",7),ft_strncmp("test","",7));
	printf("%i | %i\n",strncmp("","",7),ft_strncmp("","",7));
	return (0);
}*/
