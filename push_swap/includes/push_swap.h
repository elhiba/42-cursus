/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:44:08 by moel-hib          #+#    #+#             */
/*   Updated: 2025/01/26 15:31:38 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <stdbool.h>
# include <limits.h>

# define ERROR_TEXT "Error\n"

/* Push */
# define PA "pa\n"
# define PB "pb\n"

/* Swap */
# define SA "sa\n"
# define SB "sb\n"

/* Rotate */
# define RA "ra\n"
# define RB "rb\n"

/* Reverse rotate */
# define RRA "rra\n"
# define RRB "rrb\n"

/* Rotate a & b at the same time */
# define RR "rr\n"

/* Reverse rotate a & b at the same time */
# define RRR "rrr\n"

typedef struct s_stack
{
	int				data;
	int				index;
	int				cost;
	int				rank;
	bool			below_mid;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

/* Check inputs */
t_stack	*parse_input(int ac, char **av);
void	isfully_num(char **str);
void	check_duplicates(t_stack *stack);
void	check(char **av);
void	free_split(char **str);

/*-- Moves --*/
void	node_index(t_stack *stack);
/* Initialize A */
void	rank(t_stack **stack);
void	init_a_b(t_stack **stack_a, t_stack **stack_b);
void	move_a_b(t_stack **stack_a, t_stack **stack_b);
/* Initialize B */
void	init_b_a(t_stack **stack_b, t_stack **stack_a);
void	move_b_a(t_stack **stack_b, t_stack **stack_a);
void	excact_cost(t_stack *stack_b);
void	cost(t_stack *stack_a, t_stack *stack_b);
t_stack	*cheapest(t_stack *stack_b);
void	target(t_stack *stack_b, t_stack *stack_a);

/* Operations */
void	push(t_stack **target, t_stack **source, char *operation_name);
void	pop(t_stack **stack, char *operation_name);
void	swap(t_stack **stack, char *operation_name);
void	rotate(t_stack **stack, char *operation_name);
void	rotate_both(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack, char *operation_name);
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);

/* Sort */
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	sort_small_stack(t_stack **stack);
void	sort_large_stack(t_stack **stack_a, t_stack **stack_b);
int		is_sorted(t_stack **stack);

/* Check inside data */
int		is_biggest(t_stack *stack, int data);
int		find_biggest(t_stack *stack);

/*-- Utils --*/
/* free */
void	free_stack(t_stack *stack);
/* nodes Utils */
t_stack	*create_node(int input);
t_stack	*create_stack(t_stack *target, int number);
int		stack_size(t_stack *stack);
t_stack	*find_min(t_stack **stack);
long	big_num(t_stack *stack);
/* Print_stack */
void	print_stack(t_stack *stack);
void	print_rank(t_stack *stack);
#endif
