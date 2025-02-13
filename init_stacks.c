/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:01:39 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/13 16:11:46 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initialize_stack(char **numbers)
{
	t_stack	*stack;
	t_stack	*new_node;
	long	value;
	int		i;

	stack = NULL;
	i = 0;
	while (numbers[i])
	{
		if (!is_valid_number(numbers[i]))
			return(ft_free_stack(&stack), NULL);
		if (check_duplicate(&numbers[i]))
			return(ft_free_stack(&stack), NULL);
		value = ft_atol(numbers[i]);
		if (value < INT_MIN || value > INT_MAX)
			return(ft_free_stack(&stack), NULL);
		new_node = create_node((int)value);
		if (!new_node)
			return(ft_free_stack(&stack), NULL);
		append_node(&stack, new_node);
		i++;
	}
	return (stack);
}

t_stack	*create_node(int value)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	append_node(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	last = *stack;
	if (*stack == NULL)
	{
		*stack = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
		new_node->next = NULL;
	}
}
//auxiliar function that use to check if the stack is ok
/*void	print_stack(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	while (current)
	{
		printf("Stack: %d\n", current->value);
		//printf("Index: %d\n", current->index);
		current = current->next;
	}
}*/
