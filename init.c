/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:52:45 by brumarti          #+#    #+#             */
/*   Updated: 2022/12/16 17:13:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int argc, char **argv, t_stack	*a, t_stack	*b)
{
	int		i;

	i = 0;
	a->list = malloc(sizeof(char *) * argc - 1);
	b->list = malloc(sizeof(char *) * argc - 1);
	a->stack_size = argc - 1;
	b->stack_size = 0;
	while (i < argc - 1)
	{
		if (ft_isdigit(argv[i + 1][0]))
			a->list[i] = ft_atoi(argv[i + 1]);
		else
		{
			free(a->list);
			free(b->list);
			send_error("Not a number");
		}
		i++;
	}
}

void	print_stacks(t_stack a, t_stack b)
{
	int	i;

	i = 0;
	while (a.list[i] || b.list[i])
	{
		if (a.list[i])
			ft_printf("%d ", a.list[i]);
		else
			ft_printf("  ");
		if (b.list[i])
			ft_printf("%d\n", b.list[i]);
		else
			ft_printf("\n");
		i++;
	}
	ft_printf("_ _\na b\n\n");
}
