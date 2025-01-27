/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:04:06 by jocalder          #+#    #+#             */
/*   Updated: 2024/10/17 14:55:10 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	node = *lst;
	while (node)
	{
		temp = node->next;
		ft_lstdelone(node, del);
		node = temp;
	}
	*lst = NULL;
}
/*
void	*delete(void *content)
{
	free(content);
}

int main(void)
{
	t_list *list;
	t_list *node1 = ft_lstnew("hola");
	t_list *node2 = ft_lstnew("carnal");

	list = node1;
	node1->content = node2;

	ft_lstclear(&list, delete);
	return 0;
}*/
