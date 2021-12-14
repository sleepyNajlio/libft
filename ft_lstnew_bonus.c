/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 07:20:11 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/17 03:16:27 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst1;

	lst1 = (t_list *) malloc(sizeof(t_list));
	if (!lst1)
		return (0);
	lst1->content = content;
	lst1->next = NULL;
	return (lst1);
}
