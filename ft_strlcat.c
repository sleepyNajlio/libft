/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:35:29 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 19:03:31 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (size == 0)
		return (lens);
	while (src[i] && (i + lend) < size - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}

// int main()
// {
// 	char *str;
// 	int i;
// 	str = malloc(sizeof(char) * 20);
// 	strcpy(str, "najlio");
// 	i = ft_strlcat(str, "", 20);
// 	printf("%s %d", str, i);
// } 