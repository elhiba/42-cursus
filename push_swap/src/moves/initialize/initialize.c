/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:39:24 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/25 11:05:30 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	init_a_b(t_stack **stack_a, t_stack **stack_b)
{
	node_index(*stack_a);
	node_index(*stack_b);
	rank(stack_a);
}

void	init_b_a(t_stack **stack_b, t_stack **stack_a)
{
	target(*stack_b, *stack_a);
	cost(*stack_a, *stack_b);
}
