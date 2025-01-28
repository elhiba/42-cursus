/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:40:26 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/26 09:40:03 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

/* This function will be focused only on stack_a */
void	target(t_stack *stack_b, t_stack *stack_a)
{
	t_stack	*original_a;
	t_stack	*target_node;
	t_stack	*curr_a;
	long	tmp;
	long	current_diff;

	original_a = stack_a;
	while (stack_b != NULL)
	{
		(1) && (tmp = LONG_MIN, target_node = original_a, curr_a = original_a);
		while (curr_a != NULL)
		{
			if (stack_b->data < curr_a->data)
			{
				current_diff = (stack_b->data - curr_a->data);
				if (current_diff > tmp)
					(1) && (tmp = current_diff, target_node = curr_a);
			}
			curr_a = curr_a->next;
		}
		if (tmp == LONG_MIN)
			target_node = find_min(&original_a);
		stack_b->target = target_node;
		stack_b = stack_b->next;
	}
}
