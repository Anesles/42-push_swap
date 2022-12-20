/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:05:16 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 17:10:51 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < a->stack_size - 1)
	{
		temp = a->list[i];
		a->list[i] = a->list[i + 1];
		a->list[i + 1] = temp;
		i++;
	}
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < b->stack_size - 1)
	{
		temp = b->list[i];
		b->list[i] = b->list[i + 1];
		b->list[i + 1] = temp;
		i++;
	}
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void	rra(t_stack *a)
{
	int	i;
	int	temp;

	i = a->stack_size - 1;
	temp = 0;
	while (i > 0)
	{
		temp = a->list[i];
		a->list[i] = a->list[i - 1];
		a->list[i - 1] = temp;
		i--;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	int	i;
	int	temp;

	i = b->stack_size - 1;
	temp = 0;
	while (i > 0)
	{
		temp = b->list[i];
		b->list[i] = b->list[i - 1];
		b->list[i - 1] = temp;
		i--;
	}
	ft_printf("rrb\n");
}
