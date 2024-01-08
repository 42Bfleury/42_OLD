/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 08:53:40 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 07:00:28 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char s[100];

	strcpy(s, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	printf("%s\n", s);
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}
