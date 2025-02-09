/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:01:39 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/09 21:17:50 by marvin           ###   ########.fr       */
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
			ft_error();
		if (check_duplicate(&numbers[i]))
			ft_error();
		value = ft_atol(numbers[i]);
		if (value < INT_MIN || value > INT_MAX)
			ft_error();
		new_node = create_node((int)value);
		if (!new_node)
		{
			free(new_node);
			ft_error();
		}
		append_node(&stack, new_node);
		free(new_node);
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
	if (!stack || !new_node)
		ft_error ();
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
		ft_error ();
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
		ft_error ();
	while (stack)
	{
		if (smallest > stack->value)
			smallest = stack->value;
		stack = stack->next;
	}
	return (smallest);
}
//auxiliar function that used to check if it was the stack ok
/*void	print_stack(t_stack **stack)
{
	t_stack	*current;

	current = *stack;
	while (current)
	{
		printf("Stack: %d\n", current->value);
		printf("Index: %d\n", current->index);
		current = current->next;
	}
}*/
