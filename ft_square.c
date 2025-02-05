/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:03:29 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/05 22:05:46 by jocalder         ###   ########.fr       */
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