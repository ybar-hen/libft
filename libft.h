/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 21:51:14 by ybar-hen          #+#    #+#             */
/*   Updated: 2013/12/10 04:33:14 by ybar-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# define  BUFF_SIZE 1


void	 ft_swap	(char *a, char *b);
void	*ft_memset	(void *b, int c, size_t len);
void	 ft_bzero	(void *s, size_t n);
void	*ft_memcpy	(void *s1, const void *s2, size_t n);
void	*ft_memccpy	(void *s1, const void *s2, int c, size_t size);
void	*ft_memmove	(void *s1, const void *s2, size_t n);
void	*ft_memchr	(const void *s, int c, size_t n);
int		 ft_memcmp	(const void *s1, const void *s2, size_t n);
void	*ft_memalloc(size_t size);
void	 ft_memdel	(void **ap);

size_t	 ft_strlen	(const char *s1);
size_t	 ft_nbchar	(const char *str, char c);

char	*ft_strnew	(size_t size);
char	*ft_strcpy	(char *dest, const char *src);
char	*ft_strncpy	(char *dest, const char *src, size_t n);
char	*ft_strdup	(const char *s1);

void	 ft_strdel	(char **as);
void	 ft_strclr	(char *s);
void	 ft_striter	(char *s, void (*f)(char *));
void	 ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strrev	(const char *str);
char	*ft_strrev_	(char *str);
char	*ft_strccut	(const char *str, size_t n);
char	*ft_strcut	(char *str, size_t n);

char	*ft_strchr	(const char *s, int c);
char	*ft_strrchr	(const char *s, int c);

char	*ft_strcat 	(char *s1, const char *s2);
char	*ft_strncat	(char *s1, const char *s2, size_t n);
size_t	 ft_strlcat	(char *dst, const char *src, size_t size);

int		 ft_in_str	(const char *str, const char *needle);
int		 ft_in_str_	(char *str, char *needle, int mode);

char	*ft_strstr	(const char *s1, const char *s2);
char	*ft_strnstr	(const char *s1, const char *s2, size_t n);

int		 ft_match	(char *s1, char *s2);
int		 ft_strcmp	(const char *s1, const char *s2);
int		 ft_strncmp	(const char *s1, const char *s2, size_t size);
int		 ft_strequ	(char const *s1, char const *s2);
int		 ft_strnequ	(char const *s1, char const *s2, size_t n);

char	*ft_strmap	(char const *s, char (*f)(char));
char	*ft_strmapi	(char const *s, char (*f) (unsigned int, char));

char	*ft_strsub	(char const *s, unsigned int start, size_t len);
char	*ft_strjoin	(char const *s1, char const *s2);
char	*ft_strtrim	(char const *s);
char	*ft_kickchr (const char *str, char c);
char   **ft_strsplit(char const *s, char c);

int		 ft_isalpha	(int c);
int		 ft_isdigit	(int c);
int		 ft_isalnum	(int c);
int		 ft_isascii	(int c);
int		 ft_isprint	(int c);
int		 ft_tolower	(int c);
int		 ft_toupper	(int c);

int		 ft_ctoi	(char c);
int		 ft_atoi	(const char *str);
int		 ft_intlen	(int n);
char	*ft_itoa	(int n);

void	 ft_putchar	(char c);
void	 ft_putstr	(char const *s);
void	 ft_putendl	(char const *s);
void	 ft_putnbr	(int n);

void	 ft_putchar_fd	(char c, int fd);
void	 ft_putstr_fd	(char const *s, int fd);
void	 ft_putendl_fd	(char const *s, int fd);
void	 ft_putnbr_fd	(int n, int fd);

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct	s_list	next;
}				t_list;

#endif
