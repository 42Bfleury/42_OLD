/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:43:19 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/09 23:17:49 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_is_num(char c);
char	*ft_copywithoutspace(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_resolve(char **map);
int		ft_count_map_size(char **map);
int		ft_check_arg(char *arg);
int		ft_check_map(char *param, int size);

#endif
