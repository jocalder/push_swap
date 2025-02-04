/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:15:54 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/04 17:15:47 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*node;

	if (!from || !*from)
		return ;
	node = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	node->prev = NULL;
	node->next = NULL;
	if (!*to || !to)
		*to = node;
	else
	{
		node->next = *to;
		(*to)->prev = node;
		*to = node;
	}
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	if (*b)
		write(1, "pa\n", 3);
	else if (!*b)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
