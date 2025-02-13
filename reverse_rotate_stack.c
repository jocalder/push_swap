/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:16:43 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/10 18:32:52 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	last = get_last(stack);
	if (!*stack || !stack || !(*stack)->next)
		return ;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	if (*b)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
t_stack	*get_last(t_stack **stack)
{
	t_stack	*last;

	last = *stack;
	if (!*stack)
		ft_error ();
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}
