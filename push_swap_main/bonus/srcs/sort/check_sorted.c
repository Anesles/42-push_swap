/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:49:35 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/17 17:49:53 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	check_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->stack_size - 1)
	{
		if (a->list[i] > a->list[i + 1])
			return (0);
		i++;
	}
	return (1);
}