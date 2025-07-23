/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:05:57 by milferna          #+#    #+#             */
/*   Updated: 2025/02/26 20:55:45 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

void	ft_bzero(void *ptr, size_t num);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *destino, const void *origen, size_t num);
void	*ft_memmove(void *destino, const void *origen, size_t num);
void	*ft_memset(void *ptr, int valor, size_t num);
size_t	ft_strlcat(char *cad1, const char *cad2, size_t size);
size_t	ft_strlcpy(char *dest, const char *orig, size_t size);
int		ft_strlen(const char *str);
int		ft_toupper(int caracter);
int		ft_tolower(int caracter);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *cad1, const char *cad2, size_t count);
void	*ft_memchr(const void *buf, int c, size_t count);
int		ft_memcmp(const void *s1, const void *s2, size_t n);;
char	*ft_strnstr(const char *cad1, const char *cad2, size_t n);
int		ft_atoi(const char *cad);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);

#endif