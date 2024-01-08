/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:24:57 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 16:30:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define MAX_INT_LENGTH		(sizeof(int) * 8)
# define MAX_LONG_LENGTH	(sizeof(long) * 8)
# define BASE_2				"01"
# define BASE_8				"01234567"
# define BASE_10			"0123456789"
# define BASE_16			"0123456789abcdef"

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_abs(int n);
int					ft_intlen(int n);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isupper(int c);
int					ft_toupper(int c);
int					ft_islower(int c);
int					ft_tolower(int c);
int					ft_longlen(long n);
int					ft_min(int a, int b);
int					ft_max(int a, int b);
int					ft_pow(int nb, int pow);
int					ft_atoi(const char *str);
int					ft_uintlen(unsigned int n);
int					ft_ulonglen(unsigned long n);
int					ft_wordlen(const char *s, char c);
int					ft_atoi_base(char *str, char *base);
int					ft_count_words(const char *s, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(const char *s1, const char *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);

char				*ft_itoa(int n);
char				*ft_ltoa(long n);
char				*ft_strnew(size_t size);
char				*ft_strlower(char *str);
char				*ft_strupper(char *str);
char				*ft_uitoa(unsigned int n);
char				*ft_strdup(const char *s);
char				*ft_ultoa(unsigned long n);
char				*ft_strtrim(const char *s);
char				*ft_itoa_base(int nb, int base);
char				*ft_ltoa_base(long nb, int base);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(const char *s, char c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *dst, const char *src);
char				*ft_uitoa_base(unsigned int nb, int base);
char				*ft_ultoa_base(unsigned long nb, int base);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strncat(char *dst, const char *src, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putnbr(int n);
void				ft_strclr(char *s);
void				ft_putchar(char c);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_putfloat(float d);
void				ft_printbit_int(int n);
void				ft_printbit_char(char n);
void				ft_printbit_long(long n);
void				ft_printbit_short(short n);
void				ft_putstr(const char *str);
void				ft_putnbr_fd(int n, int fd);
void				ft_bzero(void *s, size_t n);
void				ft_putendl(const char *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putfloat_fd(float d, int fd);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putendl_fd(const char *str, int fd);
void				ft_lstadd(t_list **alst, t_list *elem);
void				ft_striter(char *s, void (*f)(char *));
void				ft_lstappend(t_list **alst, t_list *elem);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_printnbit(long n, size_t size, size_t count, char c);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void				*ft_memalloc(size_t size);
void				*ft_memset(void *ptr, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);

#endif
