/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:01:39 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/04 17:50:19 by jocalder         ###   ########.fr       */
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
			ft_error("no es digit");
		if (check_duplicate(&numbers[i]))
			ft_error("esta duplicado");
		value = ft_atol(numbers[i]);
		if (value < INT_MIN || value > INT_MAX)
			ft_error("fuera de INT");
		new_node = create_node((int)value);
		if (!new_node)
			ft_error("Allocated memory failed");
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
	new_node->cost = 0;
	new_node->cheapest = false;
	new_node->above_median = false;
	new_node->target_node = NULL;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	append_node(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	last = *stack;
	if (!stack || !new_node)
		ft_error("stack doesn't exist or node");
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

t_stack	*get_last(t_stack **stack)
{
	t_stack	*last;

	last = *stack;
	if (!*stack)
		ft_error("Stack doesn't exist");
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

int	find_min(t_stack *stack)
{
	int		smallest;
	t_stack	*head;

	head = stack;
	smallest = stack->value;
	if (!stack || !head)
		ft_error ("Stack doesn't exist");
	while (stack)
	{
		if (smallest > stack->value)
			smallest = stack->value;
		stack = stack->next;
	}
	return (smallest);
}

void	print_stack(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	while (current)
	{
		printf("Stack: %d\n", current->value);
		//printf("Index: %d\n", current->index);
		current = current->next;
	}
}
