/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:24:18 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/12 16:04:47 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*used_index(t_stack *a)
{
	int	*u_i;
	int	i;

	i = 0;
	u_i = malloc(sizeof(int) * a->stack_size);
	while (i < a->stack_size)
	{
		u_i[i] = 0;
		i++;
	}
	return (u_i);
}

void	simplify_stack(t_stack *a)
{
	int	min;
	int	max;
	int	*u_i;
	int	i;
	int	j;

	u_i = used_index(a);
	min = find_min(a);
	max = find_max(a);
	j = 0;
	while (min <= max)
	{
		i = -1;
		while (++i < a->stack_size)
		{
			if (a->list[i] == min && u_i[i] == 0)
			{
				u_i[i] = 1;
				a->list[i] = decimal_to_bit(j++);
				break ;
			}
		}
		min++;
	}
	free(u_i);
}

int	nth_digit(int num, int n)
{
	int	digit;
	int	i;

	i = 1;
	while (i < n)
	{
		num /= 10;
		i++;
	}
	digit = num % 10;
	return (digit);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	max_bits = get_max_bits(a->stack_size - 1);
	size = a->stack_size;
	i = 1;
	while (i < max_bits + 1)
	{
		j = 0;
		while (j < size)
		{
			if (get_digits(a->list[0]) >= i && nth_digit(a->list[0], i))
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
