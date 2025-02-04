/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/04 18:07:01 by jocalder         ###   ########.fr       */
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
		//sort_two(&a);
		//sort_three(&a);
		//sort_four(&a, &b);
		sort_five(&a, &b);
		print_stack(&a);
		print_stack(&b);
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