/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:39:30 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/25 14:28:56 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int	*list;
	int	stack_size;
}	t_stack;

void	init(int argc, char **argv, t_stack *a, t_stack	*b);
void	print_stacks(t_stack a, t_stack b);
//Operations
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
//Sort
void	sort_small_stack(t_stack *a, t_stack *b);
int		check_sorted(t_stack *a);
void	sort_big_stack(t_stack *a, t_stack *b);
void	special_case(t_stack *a, t_stack *b, int index);
//Utils
int		find_min(t_stack *a);
int		find_max(t_stack *a);
int		decimal_to_bit(int decimal);
int		get_digits(int n);
int		get_max_bits(int max_num);
void	free_stacks(t_stack *a, t_stack *b, char *msg);

#endif