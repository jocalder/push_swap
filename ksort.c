/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:08:58 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/05 22:18:28 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_to_b(t_stack **a, t_stack **b)
{
	int	i;
	int	range;

	i = 0;
	range = ft_square(ft_list_size(*a)) * 1.4;
	printf("Range: %d\n", range);
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index > i && (*a)->index <= (i + range))
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	printf("Index: %d\n", i);
}

void	stack_b_to_a(t_stack **a, t_stack **b)
{
	int	biggest;
	int	size;

	biggest = 0;
	size = 0;
	while (*b)
	{
		size = ft_list_size(*b);
		biggest = ft_biggest(*b);
		if (biggest == size)
		{
			rrb(b);
			pa(b, a);
		}
		else if (biggest != size && biggest == (*b)->index)
		{
			pa(b, a);
		}
		else
			rb(b);
	}
}
