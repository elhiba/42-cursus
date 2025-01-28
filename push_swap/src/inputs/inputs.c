/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:07:02 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/28 15:13:28 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*parse_input(int ac, char **av)
{
	char	**strs;
	t_stack	*a;
	int		i;
	int		j;

	a = NULL;
	i = 1;
	if (ac == 1)
		exit(1);
	isfully_num(av);
	while (av[i])
	{
		strs = ft_split(av[i], ' ');
		j = 0;
		while (strs[j])
		{
			a = create_stack(a, ft_atoi(strs[j]));
			j++;
		}
		i++;
		free_split(strs);
	}
	check_duplicates(a);
	return (a);
}

void	checker(long number)
{
	if (number > INT_MAX || number < INT_MIN)
	{
		ft_printf(ERROR_TEXT);
		exit(1);
	}
}

void	isfully_num(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		checker(ft_atoi(str[i]));
		j = 0;
		while (str[i][j])
		{
			while (str[i][j] == ' ' || str[i][j] == '\t')
				j++;
			if (str[i][j] == '-' || str[i][j] == '+')
				j++;
			if (!ft_isdigit(str[i][j]))
				return (ft_printf(ERROR_TEXT), exit(1));
			j++;
		}
		i++;
	}
}

void	check_duplicates(t_stack *stack)
{
	t_stack	*f_ptr;
	t_stack	*s_ptr;

	f_ptr = stack;
	s_ptr = NULL;
	while (f_ptr)
	{
		s_ptr = f_ptr->next;
		while (s_ptr)
		{
			if (f_ptr->data == s_ptr->data)
			{
				ft_printf(ERROR_TEXT);
				free_stack(stack);
				exit(1);
			}
			s_ptr = s_ptr->next;
		}
		f_ptr = f_ptr->next;
	}
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		free(str[i++]);
	free(str);
}
