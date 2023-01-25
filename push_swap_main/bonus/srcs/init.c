/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:52:45 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/25 14:47:17 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_duplicates(int *list, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (list[i] == list[index])
			return (1);
		i++;
	}
	return (0);
}

int	check_overflow(int index, char **argv, int *list)
{
	if (argv[index + 1][0] == '-' && list[index] >= 0)
		return (1);
	else if (ft_isdigit(argv[index + 1][0]) && list[index] < 0)
		return (1);
	return (0);
}

int	check_valid(char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (i == 0)
		{
			if (i != '-' && !ft_isdigit(str[i]))
				return (0);
		}
		else if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

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
		if (check_valid(argv[i + 1]))
		{
			a->list[i] = ft_atoi(argv[i + 1]);
			if (check_duplicates(a->list, i) \
			|| check_overflow(i, argv, a->list))
				free_stacks(a, b, "");
		}
		else
			free_stacks(a, b, "");
		i++;
	}
}

void	print_stacks(t_stack a, t_stack b)
{
	int	i;

	i = 0;
	while (i < a.stack_size || i < b.stack_size)
	{
		if (i < a.stack_size)
			ft_printf("%d ", a.list[i]);
		else
			ft_printf("  ");
		if (i < b.stack_size)
			ft_printf("%d\n", b.list[i]);
		else
			ft_printf(" \n");
		i++;
	}
	ft_printf("_ _\na b\n\n");
}
