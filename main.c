/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/28 01:51:37 by marvin           ###   ########.fr       */
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
		swap(&a);
		print_stack(&a);
		print_stack(&b);
	}
	else
		ft_error("No existen argumentos");
}
