/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:32 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/14 05:54:00 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (0);
// 	while (s[i] && i < start)
// 	{
// 		i++;
// 	}
// 	str = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (!str)
// 		return (0);
// 	while (s[i] && j < len)
// 		str[j++] = s[i++];
// 	str[j] = '\0';
// 	return (str);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (0);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
	}
	else
		str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *s = ft_substr("tripouille", 0, 42000000);
// 	printf("%s | %lu", s, strlen("tripouille"));
// 	free(s);
// 	system("leaks a.out");
// }