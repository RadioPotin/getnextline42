/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:40:50 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/16 12:00:32 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *nptr);
size_t				ft_strlen(const char *str);
void				ft_bzero(void *s, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
void				*ft_memset(void *memadr, int val, size_t n);
void				*ft_memchr(const void *string, int c, size_t n);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strncat(char *dest, const char *src, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
char				*ft_itoa(int nb);
void				ft_strclr(char *s);
void				ft_putchar(char c);
void				ft_putnbr(int nbr);
char				*ft_itoa(int entier);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **tofree);
void				ft_putendl(char const *s);
void				*ft_memalloc(size_t size);
void				ft_putstr(const char *str);
char				*ft_strtrim(char const *s);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
char				**ft_strsplit(char const *s, char c);
void				ft_striter(char *s, void (*f)(char *));
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strsub(char const *s, unsigned int i, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_lstadd(t_list **alst, t_list *newnode);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
char				*ft_strrev(char *str);
t_list				*ft_create_elem(void *data);
void				ft_list_reverse(t_list **begin_list);
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
int					ft_list_size(t_list *begin_list);
#endif
