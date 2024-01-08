/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 10:42:22 by Bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:17:02 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i++] && (j = i))
		while (base[j++])
			if (base[i - 1] == '+' || base[i - 1] == '-'
			|| base[i - 1] == base[j - 1])
				return (0);
	return ((--i < 2) ? 0 : i);
}

static int	ft_check_str(char *str, char *base)
{
	int		i;
	int		result;

	result = 0;
	while ((i = 0) || *str++)
		while (base[i++])
			if (!*str && !base[i])
				return ((result || *(str - 1) == base[i - 1]) ? 1 : 0);
			else if (!base[i])
				result = 0;
			else if (*(str - 1) == base[i - 1])
				result = 1;
	return (0);
}

static int	ft_get_rank(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int			ft_atoi_base(char *str, char *base)
{
	int		b;
	int		result;
	int		negative;

	result = 0;
	while (*str == '\v' || *str == '\t' || *str == '\f'
	|| *str == '\r' || *str == '\n' || *str == ' ')
		str++;
	if ((negative = 0) || *str == '-' || *str == '+')
		negative = ((*str++ == '-') ? 1 : 0);
	if ((b = ft_check_base(base)) && ft_check_str(str, base))
		while (*str++)
			result = ((b == 2 && !result) ? ft_get_rank(*(str - 1), base)
			: ((result * b) + ft_get_rank(*(str - 1), base)));
	return ((negative) ? -result : result);
}
