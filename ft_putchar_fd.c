/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:23:27 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/14 05:22:08 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>

// int main()
// {
// 	int fd = open("tripouille", O_RDWR | O_CREAT);
// 	char s[10] = {0}; read(fd, s, 2);
	
// 	ft_putchar_fd('c', fd);
// }


// int main()
// {
// 	// signal(SIGSEGV, sigsegv);
// 	// title("ft_putchar_fd\t: ")

// 	int fd = open("tripouille", O_RDWR | O_CREAT);
// 	ft_putchar_fd('a', fd);
// 	// lseek(fd, SEEK_SET, 0);
// 	char s[10] = {0}; read(fd, s, 2);
// 	printf("%d",(strcmp(s, "a")));
// 	// unlink("./tripouille");
// 	// write(1, "\n", 1);
// 	return (0);
// }
