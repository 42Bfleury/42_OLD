/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:19:46 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/17 16:08:33 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

char	*ft_check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (str + i);
}

int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (base[i++] == c)
			return (i - 1);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	b;
	int	c;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	b = ft_check_base(base);
	str = ft_check_str(str);
	while (b && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			neg *= -1;
	while (b && str[i])
	{
		c = ft_get_index(str[i], base);
		if (c < 0)
			return (neg * result);
		result *= b;
		result += c;
		i++;
	}
	return (neg * result);
}
/*
#include <stdio.h>
int	main(void)
{
	char *nb;
	char *base = "0123456789abcdef";

	printf("0: %i\n", ft_get_index('0',base));
	printf("1: %i\n", ft_get_index('1',base));
	printf("5: %i\n", ft_get_index('5',base));
	printf("9: %i\n", ft_get_index('9',base));
	printf("a: %i\n", ft_get_index('a',base));
	printf("f: %i\n", ft_get_index('f',base));
	printf("z: %i\n", ft_get_index('z',base));
	printf("!: %i\n", ft_get_index('!',base));
	printf("@: %i\n", ft_get_index('@',base));
	printf(" : %i\n\n", ft_get_index(' ',base));

	nb = "-42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "0";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "abc";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "-abc";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "abc42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "-abc42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "abcz";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "-abcz";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "zabc";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "-zabc";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "abc!42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "-abc!42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "---abc!42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	nb = "\t \t +-abc!42";
	printf("%s | %s = %i\n", nb, base, ft_atoi_base(nb,base));
	return (0);
}*/
