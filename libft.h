/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:30:21 by oozsertt          #+#    #+#             */
/*   Updated: 2020/10/12 19:36:27 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
void	*ft_calloc(size_t nmemb, size_t size)
int		ft_atoi(char *str)
int		ft_isalnum(int c)
int		ft_isalpha(int c)
int		ft_isascii(int c)
int		ft_isdigit(int c)
int		ft_isprint(int c)
void	*ft_memchr(const void *s, int c, size_t n)
int		ft_memcmp(const void *s1, const void *s2, size_t n)
void	*ft_memset(void *s, int c, size_t n)
char	*ft_strchr(const char *s, int c)
char	*ft_strdup(const char *s)
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
size_t	ft_strlen(const	char *s)
int	ft_strncmp(const char *s1, const char *s2, size_t n)
char		*ft_strnstr(const char *big, const char *little, size_t len)
char	*ft_strrchr(const char *s, int c)
int		ft_tolower(int c)
int		ft_toupper(int c)

#endif