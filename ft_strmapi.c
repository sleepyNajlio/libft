/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:15:28 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/14 00:00:46 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*res;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	addone(unsigned int i, char c)
// {
// 	return (i + c);
// }

// int main()
// {
// 	printf("%s", ft_strmapi("1234", addone));
// }
