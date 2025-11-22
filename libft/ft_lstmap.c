/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:28:01 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/21 14:05:37 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
