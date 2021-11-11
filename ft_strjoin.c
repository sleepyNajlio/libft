/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:47:48 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 00:32:59 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*res;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0);
	ft_strlcat(res, s1, len);
	ft_strlcat(res, s2, len);
	return (res);
}
