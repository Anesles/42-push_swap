/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:52:53 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/05 17:22:37 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_pivot(t_stack *a, t_stack *b)
{
	int	half;
	int	max;
	int	i;

	max = a->stack_size - 1;
	half = max / 2;
	if (a->list[0] > a->list[half] && a->list[0] < a->list[max])
	{
		i = -1;
		while (++i <= half)
			pb(a, b);
		rrb(b);
		while (b->stack_size != 0)
		{
			pa(a, b);
			sb(b);
		}
	}
	else if (a->list[max] > a->list[0] && a->list[max] < a->list[half])
	{
		
	}
	print_stacks(*a, *b);
	return (half);
}

void	quick_sort(t_stack *a, t_stack *b)
{
	get_pivot(a, b);
}
