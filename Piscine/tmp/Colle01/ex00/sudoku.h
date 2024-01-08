/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clguizol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 18:28:02 by clguizol          #+#    #+#             */
/*   Updated: 2015/09/13 20:04:44 by clguizol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

int				check_col(char *tab, char value);
int				check_line(char **tab, int j, char value);
int				check_square(char **tab, int i, int j, char value);
char			ft_resolve_point(char **tab, int i, int j);
void			ft_resolve(char **tab);
void			ft_print_tab(char **tab);

#endif
