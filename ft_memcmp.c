/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:58:43 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/05 21:29:59 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int main()
{
	char *s1 = strdup("");
	char *s2 = strdup("heyyy");
	int i = memcmp(s1, s2, 6);
	printf("%d", i);
}