/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:32 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 18:45:57 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] != start)
			i++;
		else
			break ;
	}
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	while (s[i] && j < len)
		str[j++] = s[i++];
	return (str);
}

int main()
{
	printf("%s", ft_substr("hello", 'e', 3));
}