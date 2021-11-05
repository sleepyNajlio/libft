/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:29:04 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/05 18:02:29 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	while (i < len && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	
	return (len);
}

int main()
{
	char *str = strdup("najlio");
	int i = ft_strlcpy(str, "hello", 6);
	printf("%s %d", str, i);
}
