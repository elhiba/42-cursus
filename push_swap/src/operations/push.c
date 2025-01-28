/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:14:09 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/23 18:22:41 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* push from source to target */
void	push(t_stack **target, t_stack **source, char *operation_name)
{
	t_stack	*first_stack;
	t_stack	*f_tmp;

	if (!target || !source)
		return ;
	first_stack = *source;
	f_tmp = *source;
	*source = first_stack->next;
	f_tmp->next = *target;
	*target = f_tmp;
	ft_printf("%s", operation_name);
}
