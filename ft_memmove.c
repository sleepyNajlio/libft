/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:06:36 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/12 00:56:07 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}

// int main()
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char s1[] = { 0,  0,  0,  0,  0,  0, 0};
// 	printf("%d %d\n", s0 == memmove(s0, s, 7) , !memcmp(s, s0, 7));
// 	printf("%d %d", s1 == ft_memmove(s1, s, 7) , !memcmp(s, s0, 7));
// }
