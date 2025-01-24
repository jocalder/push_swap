/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:01:39 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/24 21:04:46 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (check_duplicate(numbers[i]))
			ft_error();
		value = ft_atol(numbers[i]);
		if (value < INT_MIN || value > INT_MAX)
			ft_error();
		new_node = create_node((int)value);
		if (!new_node)
			ft_error()
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
	if (!*stack || !new_node)
		ft_error();
	if (*stack == NULL)
	{
		*stack = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node = *stack;
		new_node->prev = NULL;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}