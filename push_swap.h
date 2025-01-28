/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:00 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/28 01:35:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	int				cost;
	bool			cheapest;
	bool			above_median;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}	t_stack;

t_stack	*initialize_stack(char **numbers);
t_stack	*create_node(int value);
t_stack	*get_last(t_stack **stack);
void	append_node(t_stack **stack, t_stack *new_node);
void	ft_error(char *str);
void	swap(t_stack **stack);
bool	is_valid_number(const char *str);
bool	check_duplicate(char **numbers);
long	ft_atol(const char *s);
int		list_size(t_stack *stack);
void	print_stack(t_stack **stack);

#endif
