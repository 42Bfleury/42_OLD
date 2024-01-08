/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 03:57:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 05:58:24 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *src);

#endif
