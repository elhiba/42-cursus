/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:57:05 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/26 10:23:30 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

void	excact_cost(t_stack *stack_b)
{
	t_stack	*curr_b;
	int		cost_b;
	int		cost_target;

	curr_b = stack_b;
	node_index(curr_b);
	while (curr_b != NULL)
	{
		cost_b = curr_b->cost;
		cost_target = curr_b->target->cost;
		curr_b->cost = cost_b + cost_target;
		if ((curr_b->below_mid && curr_b->target->below_mid)
			|| (!curr_b->below_mid && !curr_b->target->below_mid))
		{
			if (cost_b > cost_target)
				curr_b->cost = cost_b;
			else
				curr_b->cost = cost_target;
		}
		curr_b = curr_b->next;
	}
}

void	cost(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*curr_a;
	t_stack	*curr_b;

	(1) && (curr_a = stack_a, curr_b = stack_b);
	node_index(curr_a);
	while (curr_a != NULL)
	{
		if (curr_a->below_mid)
			curr_a->cost = (stack_size(stack_a) - curr_a->index);
		else
			curr_a->cost = curr_a->index;
		curr_a = curr_a->next;
	}
	node_index(curr_b);
	while (curr_b != NULL)
	{
		if (curr_b->below_mid)
			curr_b->cost = (stack_size(stack_b) - curr_b->index);
		else
			curr_b->cost = curr_b->index;
		curr_b = curr_b->next;
	}
	excact_cost(stack_b);
}
