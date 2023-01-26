/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:18:19 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/26 17:12:15 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3(t_stack *a)
{
	if (!check_sorted(a))
	{
		if (a->list[0] > a->list[1] && a->list[0] < a->list[2])
			sa(a);
		else if (a->list[1] < a->list[0] && a->list[1] > a->list[2])
		{
			sa(a);
			rra(a);
		}
		else if (a->list[2] < a->list[0] && a->list[2] > a->list[1])
			ra(a);
		else if (a->list[2] > a->list[0] && a->list[2] < a->list[1])
		{
			sa(a);
			ra(a);
		}
		else
			rra(a);
	}
}

int	find_position(t_stack *a, int n)
{
	int	i;

	i = 0;
	if (a->list[0] > n)
		return (0);
	while (i < a->stack_size)
	{
		if (n > a->list[i])
		{
			if ((i + 1) < a->stack_size && a->list[i + 1] > n)
				return (i + 1);
		}
		i++;
	}
	return (i);
}

void	cont_sort(t_stack *a, t_stack *b, int index)
{
	if (index == 3)
	{
		pa(a, b);
		if (a->stack_size == 5)
		{
			rra(a);
			sa(a);
		}
		ra(a);
		if (a->stack_size == 5)
			ra(a);
	}
	else if (index == 4)
	{
		pa(a, b);
		ra(a);
	}
}

void	sort_position(t_stack *a, t_stack *b, int index)
{
	if (index == 0)
		pa(a, b);
	else if (index == 1)
	{
		pa(a, b);
		sa(a);
	}
	else if (index == 2)
	{
		if (a->stack_size == 4)
			rra(a);
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
		if (a->stack_size == 5)
			ra(a);
	}
	else if (index >= 3)
		cont_sort(a, b, index);
}

void	sort_small_stack(t_stack *a, t_stack *b)
{
	int	index;

	index = 0;
	if (a->stack_size == 2)
		sa(a);
	else if (a->stack_size == 3)
		sort_3(a);
	else
	{
		pb(a, b);
		if (a->stack_size == 4)
			pb(a, b);
		sort_3(a);
		if (b->stack_size == 2 && \
			(find_position(a, b->list[0]) == find_position(a, b->list[1])))
		{
			special_case(a, b, find_position(a, b->list[0]));
			return ;
		}
		while (b->stack_size != 0)
		{
			index = find_position(a, b->list[0]);
			sort_position(a, b, index);
		}
	}
}
