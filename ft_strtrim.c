/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:02:16 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/07 15:46:39 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	first_set(char *s, char *set)
{
	
}

char	*ft_strtrim(char *s, char *set)
{
	int		i;
	int		len;
	char	*res;
	int		first;

	i = 0;
	first = first_set(s, set, ft_strlen(s));
	len = last_set(s, set) - first;
	printf("%d %d", first, last_set(s, set));
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0);
	ft_strlcpy(res, &s[first], len);
	return (res);
}

int main()
{
	printf("%s", ft_strtrim("hey najlio lootfi hey lyn3ltbnmk", "hey"));
}