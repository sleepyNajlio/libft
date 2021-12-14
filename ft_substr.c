/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:32 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/17 09:04:41 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		str = malloc(1);
	else if (ft_strlen(s) <= start + len)
		str = malloc(ft_strlen(s) - start + 1);
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (start < ft_strlen(s))
	{
		while (s[i] && j < len)
			str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
