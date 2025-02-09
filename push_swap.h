/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:00 by jocalder          #+#    #+#             */
/*   Updated: 2025/02/09 20:41:19 by marvin           ###   ########.fr       */
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
	struct s_node	*next;
	struct s_node	*prev;
}	t_stack;

t_stack	*initialize_stack(char **numbers);
t_stack	*create_node(int value);
t_stack	*get_last(t_stack **stack);
int		find_min(t_stack *stack);
int		ft_list_size(t_stack *stack);
int		ft_square(int number);
int		ft_biggest(t_stack *b);
int		ft_get_position(t_stack *b, int current);
void	append_node(t_stack **stack, t_stack *new_node);
void	ft_error();
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
void	stack_a_to_b(t_stack **a, t_stack **b);
void	stack_b_to_a(t_stack **a, t_stack **b);
void	ft_free_numbers(char **numbers);
bool	is_valid_number(const char *str);
bool	check_duplicate(char **numbers);
long	ft_atol(const char *s);
//void	print_stack(t_stack **stack);

#endif
