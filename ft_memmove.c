/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:06:36 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 19:26:18 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;

	i = 0;
	//printf("%p %p\n", dst, src);
	if (dst > src)
	{
		//printf("memmove\n");
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		//printf("memcpy\n");
		while (i < len && (dst || src))
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char s1[] = { 0,  0,  0,  0,  0,  0, 0};
// 	printf("%d %d\n", s0 == memmove(s0, s, 7) , !memcmp(s, s0, 7));
// 	printf("%d %d", s1 == ft_memmove(s1, s, 7) , !memcmp(s, s0, 7));
// }
