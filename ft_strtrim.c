/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:02:16 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/15 07:20:43 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	int	first;
	int	last;

	first = 0;
	if (!s)
		return (0);
	else if (!set)
		return ((char *)s);
	while (*s && strchr(set, *s))
		s++;
	last = ft_strlen(s);
	while (last > 0 && strchr(set, s[last - 1]))
		last--;
	return (ft_substr(s, 0, last));
}

// int main()
// {
// 	char * s = ft_strtrim("   xxx   xxx", " x");
// 	printf("%s", s /*!strcmp(s, "tripouille")*/);
// }
