/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:08:58 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/07 19:50:02 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_to_b(t_stack **a, t_stack **b)
{
	int	i;
	int	range;

	i = 0;
	range = ft_square(ft_list_size(*a)) * 1.4;
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
}

void	stack_b_to_a(t_stack **a, t_stack **b)
{
	int	biggest;
	int	size;
	int	position;

	biggest = 0;
	size = 0;
	position = 0;
	while (*b)
	{
		size = ft_list_size(*b);
		biggest = ft_biggest(*b);
		position = ft_get_position(*b, biggest);
		if (position <= (size / 2))
		{
			while ((*b)->index != biggest)
				rb(b);
		}
		else
		{
			while ((*b)->index != biggest)
				rrb(b);
		}
		pa(b, a);
	}
}
