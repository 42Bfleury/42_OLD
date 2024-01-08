/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 06:19:34 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 22:33:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_count_word(char *str);
int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);
int		ft_is_positive(int nb);
int		ft_find_last_occurence(char *str, char a);
int		ft_find_next_occurence(char *str, char a, int pos);
int		ft_solve_operation(char **str);
char	*ft_substr(char *str, int start, int end);
char	*ft_get_parenthesis(char* str);
char	**ft_get_operation(char **str);
char	**ft_init_result_table(int size);
char	**ft_split_str(char *str, char delimiter);
void	ft_putnbr(int a);
void	ft_putchar(char a);
void	*ft_init_operators(void);

#endif
