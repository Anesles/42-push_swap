/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:44:11 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/11 16:45:41 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_max(t_stack *a)
{
	int	max;
	int	i;

	i = 0;
	max = a->list[0];
	while (i < a->stack_size)
	{
		if (max < a->list[i])
			max = a->list[i];
		i++;
	}
	return (max);
}
