/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodesUtils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:26:02 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/25 10:52:46 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*create_node(int input)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = input;
	node->next = NULL;
	return (node);
}

t_stack	*create_stack(t_stack *target, int number)
{
	t_stack	*current;
	t_stack	*new;

	new = create_node(number);
	if (!new)
		return (NULL);
	if (!target)
		return (new);
	current = target;
	while (current->next)
		current = current->next;
	current->next = new;
	return (target);
}

long	big_num(t_stack *stack)
{
	long	tmp;

	tmp = LONG_MIN;
	while (stack)
	{
		if (stack->data > tmp)
			tmp = stack->data;
		stack = stack->next;
	}
	return (tmp);
}

t_stack	*find_min(t_stack **stack)
{
	t_stack	*a;
	t_stack	*min;
	long	tmp;

	a = *stack;
	tmp = LONG_MAX;
	while (a)
	{
		if (tmp > a->data)
		{
			tmp = a->data;
			min = a;
		}
		a = a->next;
	}
	return (min);
}

int	stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
