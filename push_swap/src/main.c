/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:01:40 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/27 11:45:25 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = parse_input(ac, av);
	b = NULL;
	if (!is_sorted(&a))
	{
		if (stack_size(a) <= 3)
			sort_small_stack(&a);
		else
			sort_stack(&a, &b);
	}
	free_stack(a);
}
