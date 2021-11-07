/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:29:29 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 20:25:41 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (tofind[i] == '\0')
		return (str);
	while (str[i] && tofind[j] && i < len)
	{
		if (str[i] == tofind[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == ft_strlen(tofind))
		return (&str[i - j]);
	else
		return (0);
}
