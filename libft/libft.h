/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vanot <vanot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:30:03 by cvan-oot          #+#    #+#             */
/*   Updated: 2023/08/21 13:08:06 by vanot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
int			ft_atoi(const char *str);
void		ft_bzero(void *s, unsigned int n);
void		*ft_calloc(unsigned int elementcount, unsigned int elementsize);
int			ft_isalnum(int str);
int			ft_isalpha(int str);
int			ft_isascii(int str);
int			ft_isdigit(int str);
int			ft_isprint(int str);
void		*ft_memchr(const void *memoryBlock,
				int searchedChar, unsigned int size);
int			ft_memcmp( const void *pointer1,
				const void *pointer2, unsigned int size);
void		*ft_memcpy(void	*dest, const void	*src, unsigned int n);
void		*ft_memmove(void *dest, const void *src, unsigned int n);
void		*ft_memset(void *dest, int value, unsigned int count);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *str, int c);
char		*ft_strdup(char *src);
unsigned	int	ft_strlcat(char *dst, const char *src, size_t size);
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t		ft_strlen( const char *str);
int			ft_strncmp( const char *first, const char *second,
				unsigned int length );
char		*ft_strnstr(const char *big, const char *little, unsigned int len);
char		*strchr( const char *str, int c );
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int ch);
int			ft_toupper(int ch);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strrchr(const char *str, int c);
int			ft_printf(const char *format, ...);
int			print_hex(int x, char format);
int			print_nbr(int nbr);
int			print_int(char c);
int			print_string(char *s);
int			hex_len(unsigned long x);
int			print_void(unsigned long long ptr);
int			print_unsigned(unsigned int nbr);

#endif