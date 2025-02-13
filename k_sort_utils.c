/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:49:22 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/12 15:40:22 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_square(int number)
{
	int	i;

	i = 0;
	while ((i * i) <= number)
	{
		if ((i * i) == number)
			return (i);
		i++;
	}
	return (i - 1);
}

int	ft_biggest(t_stack *b)
{
	int	biggest;

	biggest = b->index;
	while (b)
	{
		if (b->index > biggest)
			biggest = b->index;
		b = b->next;
	}
	return (biggest);
}

int	ft_get_position(t_stack *b, int current)
{
	int	position;
	t_stack *temp;

	temp = b;
	position = 0;
	while (temp)
	{
		if (temp->index == current)
			return (position);
		position++;
		temp = temp->next;
	}
	return (-1);
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
