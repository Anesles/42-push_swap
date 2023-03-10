/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:57 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/25 14:29:42 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

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

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
	{
		init(argc, argv, &a, &b);
		if (check_sorted(&a))
		{
			free(a.list);
			free(b.list);
			exit(EXIT_SUCCESS);
		}
		if (a.stack_size <= 5)
			sort_small_stack(&a, &b);
		else
			sort_big_stack(&a, &b);
		free(a.list);
		free(b.list);
	}
	else
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
