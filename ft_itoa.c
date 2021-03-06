/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:10:45 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/17 03:21:07 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charnum(long int n)
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
	int			i;
	char		*str;
	long int	nbr;

	i = 0;
	nbr = (long int)(n);
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	i += charnum(nbr);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
