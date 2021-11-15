/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:58:18 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/15 06:27:04 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	writer(const char *str, int i, int sign)
{
	unsigned long long	res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (res > 9223372036854775807)
		{
			if (sign == -1)
				return (0);
			else if (sign == 1)
				return (-1);
		}
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					p;
	unsigned long long	res;

	i = 0;
	p = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-')
	{
		p = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (writer(str, i, p));
}

// int	main()
// {
// 	printf("%d", ft_atoi("9223372036854775808"));
// }