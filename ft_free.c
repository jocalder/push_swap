/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:14:03 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/13 15:45:17 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_numbers(char **numbers)
{
	int		i;

	i = 0;
	if (!numbers)
		return ;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

void	ft_free_exit(char **numbers, t_stack **stack, int EXIT)
{
	ft_free_numbers(numbers);
	ft_free_stack(stack);
	if (EXIT == EXIT_FAILURE)
		ft_error();
	else
		exit(EXIT);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || !stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

void	ft_free_both_stacks(t_stack **a, t_stack **b)
{
	ft_free_stack(a);
	ft_free_stack(b);
}