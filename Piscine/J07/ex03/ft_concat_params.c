/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 00:32:50 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 03:47:19 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

static char		*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i++])
		dest[i - 1] = src[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}

char			*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		length;
	char	*result;

	i = 0;
	length = 0;
	while (++i < argc)
		length += ft_strlen(argv[i]);
	length += (argc - 1);
	if (!(result = (char*)malloc(sizeof(char) * length)))
		return (NULL);
	i = 0;
	length = 0;
	while (++i < argc)
	{
		if (i > 1)
			result[length++] = '\n';
		ft_strcpy((result + length), argv[i]);
		length += ft_strlen(argv[i]);
	}
	return (result);
}
