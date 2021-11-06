/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:50:31 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 16:26:11 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
#define		LIBFT_H

#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include 	<string.h>
#include	<ctype.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *str);
size_t	ft_strlcat( char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char *str, char *tofind, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif 
