/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:20:14 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 18:25:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	stack_3(t_stack *a, t_stack *b, int i)
{
	pa(a, b);
	if (i == 1)
		sa(a);
	else if (i == 2)
	{
		rra(a);
		sa(a);
		ra(a);
		ra(a);
	}
	else if (i == 3)
		ra(a);
}

static void	stack_4(t_stack *a, t_stack *b, int i)
{
	if (i != 2)
		pa(a, b);
	if (i == 1)
		sa(a);
	else if (i == 2)
	{
		pb(a, b);
		pb(a, b);
		rrb(b);
		pa(a, b);
		pa(a, b);
		pa(a, b);
	}
	else if (i == 3)
	{
		rra(a);
		sa(a);
		ra(a);
		ra(a);
	}
	else if (i == 4)
		ra(a);
}

void	find_and_set(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	j = 0;
	while (j < 2)
	{
		if (b->stack_size == 0)
			break ;
		i = 0;
		while (i < a->stack_size)
		{
			if (b->list[0] < a->list[i])
				break ;
			i++;
		}
		if (a->stack_size == 3)
			stack_3(a, b, i);
		else if (a->stack_size == 4)
			stack_4(a, b, i);
		j++;
	}
}
