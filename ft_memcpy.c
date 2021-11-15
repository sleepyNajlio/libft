/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:31:55 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/15 07:19:05 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
// void	*ft_memcpy(void *str1, const void *str2, size_t n)
// {
// 	unsigned int	i;
// 	char			*astr1;
// 	char			*bstr2;

// 	astr1 = (char *)str1;
// 	bstr2 = (char *)str2;
// 	i = 0;
// 	while (i < n && (astr1 || bstr2))
// 	{
// 		astr1[i] = bstr2[i];
// 		i++;
// 	}
// 	return ((void *)str1);
// }

int main()
{
	printf("%s\n", (char *)ft_memcpy(NULL, NULL, 3));
	printf("%s\n", (char *)memcpy(NULL, NULL, 3));
}
