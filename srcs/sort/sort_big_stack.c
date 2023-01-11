/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:24:18 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/11 17:14:18 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	simplify_stack(t_stack *a)
{
	int	min;
	int	max;
	int	i;
	int	j;

	i = 0;
	min = find_min(a);
	max = find_max(a);
	j = 0;
	while (min <= max)
	{
		i = 0;
		while (i < a->stack_size)
		{
			if (a->list[i] == min)
			{
				a->list[i] = decimal_to_bit(j);
				j++;
				break ;
			}
			i++;
		}
		min++;
	}
}

int	get_max_bits(int max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	max_bits = get_max_bits(a->stack_size - 1);
	size = a->stack_size;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((a->list[0] >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->stack_size != 0)
			pa(a, b);
		i++;
	}
}

void	sort_big_stack(t_stack *a, t_stack *b)
{
	simplify_stack(a);
	radix_sort(a, b);
}
