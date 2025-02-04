/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:00 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/04 18:06:15 by jocalder         ###   ########.fr       */
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
int		find_min(t_stack *stack);
void	append_node(t_stack **stack, t_stack *new_node);
void	ft_error(char *str);
void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	push(t_stack **from, t_stack **to);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	index_stack(t_stack *a);
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
bool	is_valid_number(const char *str);
bool	check_duplicate(char **numbers);
long	ft_atol(const char *s);
int		list_size(t_stack *stack);
void	print_stack(t_stack **stack);

#endif
