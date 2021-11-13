/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:10:45 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/12 18:47:06 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charnum(int n)
{
	int	i;

	i = 0;
	while (n / 10 > 0)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		t;

	i = 0;
	t = n;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	i += charnum(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	while (i >= 0)
	{
		if (t < 0 && i == 0)
			str[i] = '-';
		else
			str[i--] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
#include <limits.h>

int main()
{
	printf("%s", ft_itoa(INT_MIN));
}
