/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:50:46 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/22 17:15:19 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/push_swap.h"

void	rank(t_stack **stack)
{
	t_stack	*current;
	t_stack	*compare;
	int		count;

	current = *stack;
	while (current)
	{
		count = 0;
		compare = *stack;
		while (compare)
		{
			if (current->data > compare->data)
				count++;
			compare = compare->next;
		}
		current->rank = count;
		current = current->next;
	}
}
