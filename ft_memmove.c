/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:06:36 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/04 21:37:18 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	int		len;

	i = 0;
	if (dest > src)
	{
		while (len > 0)
		{
			*(unsigned char *)dst + len - 1 = *(unsigned char *)src + len - 1;
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
int main()
{
	str = "hello"
	memmove(str + 3, str, 5);
	printf("%s", str);
}
