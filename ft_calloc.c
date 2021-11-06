/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:52:44 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 16:33:47 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	i;

	s = malloc(count * size);
	i = 0;
	if (!s)
		return (0);
	ft_memset(s, 0, count * size);
	return (s);
}

int main()
{
	int *str = ft_calloc(6, 1);
	char *s = (char *) str;
	printf("%s", s);
}