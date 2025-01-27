/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:55:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/27 22:07:44 by jocalder         ###   ########.fr       */
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
		print_stack(&a);
	}
	else
		ft_error("No existen argumentos");
}
