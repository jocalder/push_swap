/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/07 18:12:05 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**numbers;

	a = NULL;
	b = NULL;
	numbers = NULL;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		a = initialize_stack(numbers);
		index_stack(a);
		stack_a_to_b(&a, &b);
		//print_stack(&b);
		stack_b_to_a(&a, &b);
		//printf("stack_a\n");
		//print_stack(&a);
		//printf("stack_b\n");
		//print_stack(&b);
	}
	else
		ft_error("No existen argumentos");
}

void	index_stack(t_stack *a)
{
	t_stack	*current;
	t_stack	*compare;
	int		index;

	current = a;
	while (current)
	{
		index = 0;
		compare = a;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}