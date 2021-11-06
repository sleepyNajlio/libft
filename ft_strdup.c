/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:59:33 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/06 16:10:56 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		len;
	int		i;
	char	*s;

	i = 0;
	len = ft_strlen(str);
	s = malloc(sizeof(char) * len);
	if (!s)
		return (0);
	ft_strlcpy(s, str, len + 1);
	return (s);
}

int main()
{
	char *str = strdup("    gg");
	printf("%s", str);
}