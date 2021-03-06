/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:29:29 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/17 03:20:42 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (tofind[i] == '\0')
		return ((char *)&str[i]);
	while (str[i] && tofind[j] && (size_t) i < len)
	{
		j = 0;
		while (str[i + j] == tofind[j] && i + j < len)
		{
			j++;
			if (tofind[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
