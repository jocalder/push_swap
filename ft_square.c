/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:03:29 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/09 21:12:42 by marvin           ###   ########.fr       */
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

void	ft_free_numbers(char **numbers)
{
	int		i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
	ft_error();
}