/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:21:40 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/04 20:25:34 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		i++;
	}
	return (b);
}

int main()
{
	char s[50] = "hello";
	
	ft_memset(s + 1, 's',  3 * sizeof(char));
	printf("%s", s);
}
