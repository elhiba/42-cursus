/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printUtils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:08:53 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/22 14:52:33 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*ptr;

	if (!stack)
	{
		ft_printf("Null\n");
		return ;
	}
	ptr = stack;
	while (ptr)
	{
		ft_printf("%i", ptr->data);
		if (ptr->next)
			ft_printf("-> ");
		ptr = ptr->next;
	}
	ft_printf("\n");
}

void	print_rank(t_stack *stack)
{
	t_stack	*ptr;

	if (!stack)
	{
		ft_printf("Null\n");
		return ;
	}
	ptr = stack;
	while (ptr)
	{
		ft_printf("%i", ptr->rank);
		if (ptr->next)
			ft_printf("->\t");
		ptr = ptr->next;
	}
	ft_printf("\n");
}
