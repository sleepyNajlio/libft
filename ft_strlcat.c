/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:35:29 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/18 01:14:19 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen(src);
	if (!dst && !size)
		return (lens);
	lend = ft_strlen(dst);
	if (size <= lend)
		return (size + lens);
	while (src[i] && (i + lend) < size - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lens + lend);
}
