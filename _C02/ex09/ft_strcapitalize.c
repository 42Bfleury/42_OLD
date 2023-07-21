/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 03:25:44 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/17 17:03:05 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			&& (!(('A' <= str[i - 1] && str[i - 1] <= 'Z')
					|| ('a' <= str[i - 1] && str[i - 1] <= 'z')
					|| ('0' <= str[i - 1] && str[i - 1] <= '9'))))
					str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux";
	ft_putstr(ft_strcapitalize(test));
	return (0);
}*/
