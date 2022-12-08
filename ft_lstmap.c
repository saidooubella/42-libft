/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:51:50 by soubella          #+#    #+#             */
/*   Updated: 2022/10/10 12:49:48 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*node;

	head = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == 0)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		if (head == 0)
			head = node;
		else
			tail->next = node;
		tail = node;
		lst = lst->next;
	}
	return (head);
}
