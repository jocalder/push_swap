/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/13 17:26:18 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char **splitter(char *argv)
{
	char	**numbers;

	numbers = ft_split(argv, ' ');
	if (!numbers)
		ft_free_exit(numbers, NULL, EXIT_FAILURE);
	return(numbers);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**numbers;

	a = NULL;
	b = NULL;
	numbers = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		numbers = splitter(argv[1]);
	else
		numbers = argv + 1;
	a = initialize_stack(numbers);
	if (argc == 2)
		ft_free_numbers(numbers);
	if (!a)
		ft_free_exit(NULL, &a, EXIT_FAILURE);
	if (is_sorted(a))
		ft_free_exit(NULL, &a, EXIT_SUCCESS);
	sort_selector(&a, &b);
	ft_free_both_stacks(&a, &b);
	ft_free_exit(NULL, &a, EXIT_SUCCESS);
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

bool	is_sorted(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	if (!a || !a->next)
		ft_free_exit(NULL, &a, EXIT_SUCCESS);
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (false);
		temp =temp->next;
	}
	return (true);
}