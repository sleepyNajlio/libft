/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:40:16 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/11 02:27:07 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	char		c;

	nbr = (long int)(n);
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr < 10)
	{
		c = nbr + 48;
		write(fd, &c, 1);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		c = nbr % 10 + 48;
		write(fd, &c, 1);
	}
}
