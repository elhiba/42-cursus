/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:21:08 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/21 20:50:29 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* is it? */
int	is_sorted(t_stack **stack)
{
	t_stack	*f_ptr;
	t_stack	*s_ptr;

	f_ptr = *stack;
	while (f_ptr->next)
	{
		s_ptr = f_ptr->next;
		while (s_ptr)
		{
			if (f_ptr->data > s_ptr->data)
				return (0);
			s_ptr = s_ptr->next;
		}
		f_ptr = f_ptr->next;
	}
	return (1);
}

int	find_biggest(t_stack *stack)
{
	int	tmp;

	tmp = INT_MIN;
	while (stack)
	{
		if (tmp < stack->data)
			tmp = stack->data;
		stack = stack->next;
	}
	return (tmp);
}
