/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:32 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/15 07:20:51 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i] && i < start)
	{
		i++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[i] && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

// int main()
// {
// 	char *s = ft_substr("tripouille", 0, 42000000);
// 	printf("%s | %lu", s, strlen("tripouille"));
// 	free(s);
// 	system("leaks a.out");
// }