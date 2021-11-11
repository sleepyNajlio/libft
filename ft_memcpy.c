/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:31:55 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 17:36:49 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	printf("helloo");
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		i++;
	}
	return (dst);
}
