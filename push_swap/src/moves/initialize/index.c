/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:24:25 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/22 10:33:54 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	node_index(t_stack *stack)
{
	int	i;
	int	size;
	int	median;

	i = 0;
	size = stack_size(stack);
	median = size / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->below_mid = false;
		else
			stack->below_mid = true;
		i++;
		stack = stack->next;
	}
}
