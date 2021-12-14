/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:30:39 by nloutfi           #+#    #+#             */
/*   Updated: 2021/11/16 11:30:52 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = (*lst);
	while (temp != NULL)
	{
		temp = temp->next;
		ft_lstdelone((*lst), del);
		(*lst) = temp;
	}
	*lst = NULL;
}
