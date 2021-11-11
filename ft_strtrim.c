/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:02:16 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 02:23:47 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	first_set(char *s, char *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(set);
	while (ft_strchr(set, s[i]) && i < len)
	{
		i++;
	}
	return (i);
}

int	last_set(char *s, char *set)
{
	int	lens;
	int	lenset;

	lens = ft_strlen(s);
	lenset = ft_strlen(set);
	while (ft_strchr(set, s[lens - 1]))
	{
		lens--;
	}
	return (lens + 1);
}

char	*ft_strtrim(char *s, char *set)
{
	int		i;
	int		len;
	char	*res;
	int		first;

	i = 0;
	first = first_set(s, set);
	len = last_set(s, set) - first;
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0);
	ft_strlcpy(res, &s[first], len);
	return (res);
}
