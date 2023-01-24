/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:58:53 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/24 15:29:49 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa_2times(t_stack *a, t_stack *b)
{
	pa(a, b);
	pa(a, b);
}

void	special_case(t_stack *a, t_stack *b, int index)
{
	if (b->list[0] < b->list[1])
		sb(b);
	if (index == 0)
		pa_2times(a, b);
	else if (index == 1)
	{
		ra(a);
		pa_2times(a, b);
		rra(a);
	}
	else if (index == 2)
	{
		rra(a);
		pa_2times(a, b);
		rra(a);
		rra(a);
	}
	else if (index == 3)
	{
		pa_2times(a, b);
		ra(a);
		ra(a);
	}	
}
