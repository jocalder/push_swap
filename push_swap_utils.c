/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:00:20 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/05 19:59:25 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	if (!str)
		printf("Error\n");
	else
		printf("Error: %s\n", str);
	exit(EXIT_FAILURE);
}

bool	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (false);
	if (str[i] == '0' && i == 1)
		return (false);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool	check_duplicate(char **numbers)
{
	int		i;
	int		j;
	long	current_number;
	long	parsed_number;

	i = 0;
	while (numbers[i])
	{
		current_number = ft_atol(numbers[i]);
		j = i + 1;
		while (numbers[j])
		{
			parsed_number = ft_atol(numbers[j]);
			if (current_number == parsed_number)
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}

int	ft_list_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
