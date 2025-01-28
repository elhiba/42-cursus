/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:30:56 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/27 11:43:40 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

void	both_checker(t_stack **stack_b, t_stack **stack_a, t_stack *cheapest)
{
	if (!cheapest->below_mid && !cheapest->target->below_mid)
		while (cheapest != *stack_b && cheapest->target != *stack_a)
			rotate_both(stack_a, stack_b);
	if (cheapest->below_mid && cheapest->target->below_mid)
		while (cheapest != *stack_b && cheapest->target != *stack_a)
			reverse_rotate_both(stack_a, stack_b);
}

void	move_b_a(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*current_b;

	current_b = cheapest(*stack_b);
	both_checker(stack_b, stack_a, current_b);
	node_index(*stack_a);
	node_index(*stack_b);
	while (current_b != *stack_b)
	{
		if (!current_b->below_mid)
			rotate(stack_b, RB);
		else
			reverse_rotate(stack_b, RRB);
	}
	while (current_b->target != *stack_a)
	{
		if (!current_b->target->below_mid)
			rotate(stack_a, RA);
		else
			reverse_rotate(stack_a, RRA);
	}
	push(stack_a, stack_b, PA);
}
