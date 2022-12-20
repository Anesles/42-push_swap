/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:46:46 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 17:19:53 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	short_stack(t_stack *a)
{
	if (a->list[0] > a->list[1])
	{
		if (a->list[1] < a->list[2] && a->list[2] > a->list[0])
			sa(a);
		else if (a->list[0] > a->list[2] && a->list[1] < a->list[2])
			ra(a);
		else if (a->list[1] > a->list[2])
		{
			sa(a);
			rra(a);
		}
	}
	else
	{
		if (a->list[0] < a->list[2])
		{
			sa(a);
			ra(a);
		}
		else
			rra(a);
	}
}
