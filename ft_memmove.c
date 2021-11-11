/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:06:36 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 02:26:08 by nloutfi          ###   ########.fr       */
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
			*(unsigned char *)(dst + len - 1)
				= *(unsigned char *)(src + len - 1);
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
