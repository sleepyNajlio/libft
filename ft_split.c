/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:59:01 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 02:36:34 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char *str, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == c) && str[i] != c)
			n++;
		i++;
	}
	return (n);
}

static char	*word_maker(char *s, char c, int j)
{
	int		len;
	char	*res;
	int		i;

	len = 0;
	i = 0;
	while (s[j + len] != c)
		len++;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	while (s[j] != c)
	{
		res[i++] = s[j++];
	}
	res[i] = '\0';
	return (res);
}

void	ft_free(char **res, int j)
{
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * word_count((char *)s, c) + 1);
	if (!res)
		return (NULL);
	while (i < word_count((char *)s, c))
	{
		if ((j == 0 || s[j - 1] == c) && s[j] != c)
		{
			res[i] = word_maker((char *)s, c, j);
			if (!(res))
			{
				ft_free(&res[i - 1], i);
			}
			i++;
		}
		j++;
	}
	res[i] = 0;
	return (res);
}
