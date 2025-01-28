/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:15:26 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/23 18:24:36 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* rotate mean link the first node to the last node */
void	rotate(t_stack **stack, char *operation_name)
{
	t_stack	*f_node;
	t_stack	*l_node;

	if (!stack || !*stack)
		return ;
	f_node = *stack;
	l_node = *stack;
	while (l_node->next)
		l_node = l_node->next;
	*stack = f_node->next;
	l_node->next = f_node;
	f_node->next = NULL;
	ft_printf("%s", operation_name);
}

/* rotate both stacks at the same time */
void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !stack_b || !*stack_a || !*stack_b)
		return ;
	rotate(stack_a, "");
	rotate(stack_b, "");
	ft_printf(RR);
}
