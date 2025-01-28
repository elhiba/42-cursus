/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:14:52 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/25 10:43:05 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* swap the top two nodes */
void	swap(t_stack **stack, char *operation_name)
{
	t_stack	*f_node;
	t_stack	*s_node;

	f_node = *stack;
	s_node = (*stack)->next;
	f_node->next = s_node->next;
	s_node->next = f_node;
	*stack = s_node;
	ft_printf("%s", operation_name);
}
