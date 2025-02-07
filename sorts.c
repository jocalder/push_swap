/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:40:49 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/07 19:50:56 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if (!*a || !a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (!*a || !a)
		return ;
	if (first < second && second > third)
		rra(a);
	else if (first > second && first > third)
		ra(a);
	first = (*a)->value;
	second = (*a)->next->value;
	if (first > second)
		sa(a);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = find_min(*a);
	if (!*a || !a)
		return ;
	while ((*a)->value != smallest)
	{
		ra(a);
	}
	pb(a, b);
	sort_three(a);
	pa(b, a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	smallest;

	smallest = find_min(*a);
	if (!*a || !a)
		return ;
	while ((*a)->value != smallest)
	{
		ra(a);
	}
	pb(a, b);
	sort_four(a, b);
	pa(b, a);
}
