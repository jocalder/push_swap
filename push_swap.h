/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:24:00 by jocalder          #+#    #+#             */
/*   Updated: 2025/01/22 17:32:32 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

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

#endif
