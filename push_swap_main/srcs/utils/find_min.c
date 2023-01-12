/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:43:44 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/11 16:45:23 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min(t_stack *a)
{
	int	min;
	int	i;

	i = 0;
	min = a->list[0];
	while (i < a->stack_size)
	{
		if (min > a->list[i])
			min = a->list[i];
		i++;
	}
	return (min);
}
