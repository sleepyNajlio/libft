/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:02:16 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/15 07:04:49 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	first_set(const char *s, const char *set)
// {
// 	int	i;

// 	i = 0;
// 	while (ft_strchr(set, s[i]) && s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	last_set(const char *s, const char *set)
// {
// 	int	lens;

// 	lens = ft_strlen(s);
// 	if (lens == 0)
// 		return (0);
// 	while (ft_strchr(set, s[lens - 1]))
// 	{
// 		lens--;
// 	}
// 	return (lens);
// }

// char	*ft_strtrim(const char *s, const char *set)
// {
// 	int		i;
// 	int		len;
// 	char	*res;
// 	int		first;

// 	i = 0;
// 	len = 0;
// 	first = first_set(s, set);
// 	if (first < last_set(s, set))
// 		len = last_set(s, set) - first;
// 	res = malloc(sizeof(char) * len + 1);
// 	if (!res)
// 		return (0);
// 	ft_strlcpy(res, &s[first], len);
// 	res[len] = '\0';
// 	return (res);
// }

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
