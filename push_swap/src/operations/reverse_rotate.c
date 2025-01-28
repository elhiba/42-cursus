/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:16:15 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/23 18:24:19 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* rotate mean link the last node to the first node */
void	reverse_rotate(t_stack **stack, char *operation_name)
{
	t_stack	*f_node;
	t_stack	*l_node;

	if (!stack || !*stack)
		return ;
	f_node = *stack;
	l_node = *stack;
	while (l_node->next->next)
		l_node = l_node->next;
	*stack = l_node->next;
	(*stack)->next = f_node;
	l_node->next = NULL;
	ft_printf("%s", operation_name);
}

/* reverse rotate stacks at the same time */
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !stack_b || !*stack_a || !*stack_b)
		return ;
	reverse_rotate(stack_a, "");
	reverse_rotate(stack_b, "");
	ft_printf(RRR);
}
