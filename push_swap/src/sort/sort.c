/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:21:33 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/26 10:36:04 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	lastmove(t_stack **stack_ptr)
{
	t_stack	*node;

	if (!stack_ptr || !*stack_ptr)
		return ;
	node = find_min(stack_ptr);
	node_index(*stack_ptr);
	while (node->index != 0)
	{
		reverse_rotate(stack_ptr, RRA);
		node_index(*stack_ptr);
	}
}

/* Here the real push_swap is! */
void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int		size_a;
	int		size_b;

	size_a = stack_size(*stack_a);
	while (size_a-- > 3)
	{
		init_a_b(stack_a, stack_b);
		move_a_b(stack_a, stack_b);
	}
	sort_small_stack(stack_a);
	size_b = stack_size(*stack_b);
	while (size_b--)
	{
		init_b_a(stack_b, stack_a);
		move_b_a(stack_b, stack_a);
	}
	lastmove(stack_a);
}

/* sort between 3 or less element on the stack (two ofc) */
void	sort_small_stack(t_stack **stack)
{
	while (!is_sorted(stack))
	{
		if (stack_size(*stack) == 2)
		{
			if ((*stack)->data > (*stack)->next->data)
				swap(stack, SA);
		}
		else
		{
			if (find_biggest(*stack) == (*stack)->data)
				rotate(stack, RA);
			else if (find_biggest(*stack) == (*stack)->next->data)
				reverse_rotate(stack, RRA);
			if ((*stack)->data > (*stack)->next->data)
				swap(stack, SA);
		}
	}
}
