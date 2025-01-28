/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 21:27:33 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/23 17:00:00 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

t_stack	*cheapest(t_stack *stack_b)
{
	t_stack	*cheapest_node;
	int		tmp;

	tmp = stack_b->cost;
	cheapest_node = stack_b;
	while (stack_b)
	{
		if (stack_b->cost < tmp)
		{
			tmp = stack_b->cost;
			cheapest_node = stack_b;
		}
		stack_b = stack_b->next;
	}
	return (cheapest_node);
}
