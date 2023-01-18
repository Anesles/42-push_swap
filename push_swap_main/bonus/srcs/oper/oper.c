/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:05:39 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/17 18:16:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	sa(t_stack *a)
{
	int	temp;

	if (a->stack_size >= 2)
	{
		temp = a->list[0];
		a->list[0] = a->list[1];
		a->list[1] = temp;
	}
}

void	sb(t_stack *b)
{
	int	temp;

	if (b->stack_size >= 2)
	{
		temp = b->list[0];
		b->list[0] = b->list[1];
		b->list[1] = temp;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack *a, t_stack *b)
{
	int	temp;
	int	i;

	if (b->stack_size == 0)
		return ;
	temp = b->list[0];
	i = -1;
	while (++i < b->stack_size - 1)
		b->list[i] = b->list[i + 1];
	b->list[b->stack_size - 1] = 0;
	b->stack_size--;
	i = a->stack_size + 1;
	while (--i > 0)
		a->list[i] = a->list[i - 1];
	a->list[0] = temp;
	a->stack_size++;
}

void	pb(t_stack *a, t_stack *b)
{
	int	temp;
	int	i;

	if (a->stack_size == 0)
		return ;
	temp = a->list[0];
	i = -1;
	while (++i < a->stack_size - 1)
		a->list[i] = a->list[i + 1];
	a->list[a->stack_size - 1] = 0;
	a->stack_size--;
	i = b->stack_size + 1;
	while (--i > 0)
		b->list[i] = b->list[i - 1];
	b->list[0] = temp;
	b->stack_size++;
}
