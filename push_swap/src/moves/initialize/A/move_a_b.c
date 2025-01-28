/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:37:46 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/28 11:38:57 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

/* All we need here is leaving the 3 bigger numbers in stack a */
void	move_a_b(t_stack **stack_a, t_stack **stack_b)
{
	int	median;

	median = stack_size(*stack_a) / 3;
	while ((*stack_a)->rank > median)
		rotate(stack_a, RA);
	push(stack_b, stack_a, PB);
}
