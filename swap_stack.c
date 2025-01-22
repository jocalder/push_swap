/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:15:29 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/22 21:02:42 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !stack || !*stack->next)
		ft_error();
	first = *stack;
	second = first->next;
	first->next = second->next;
	first->prev = second;
	
}

void	sa(t_stack *stack)
{
	swap(&stack_a);
}

void	sb(t_stack *stack)
{
	swap(&stack_b);
}

void	ss(t_stack *stack)
{
	swap(stack_a);
	swap(stack_b);
}
