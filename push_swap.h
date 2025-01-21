/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:00 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/21 21:06:13 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

typedef struct  s_stack
{
    t_node	*heap;
    int		size;
} t_stack;

typedef struct  s_push_swap
{
    t_stack	*a;
    t_stack	*b;
    int		size;
    int		*sorted_node;
}   t_push_swap;

#endif

