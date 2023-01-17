/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:22:20 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/17 18:05:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void	execute_instruction(char *inst, t_stack *a, t_stack *b)
{
	if (!ft_strncmp(inst, "sa\n", 3))
		sa(a);
	else if (!ft_strncmp(inst, "sb\n", 3))
		sb(b);
	else if (!ft_strncmp(inst, "ss\n", 3))
		ss(a, b);
	else if (!ft_strncmp(inst, "pa\n", 3))
		pa(a, b);
	else if (!ft_strncmp(inst, "pb\n", 3))
		pb(a, b);
	else if (!ft_strncmp(inst, "ra\n", 3))
		ra(a);
	else if (!ft_strncmp(inst, "rb\n", 3))
		rb(b);
	else if (!ft_strncmp(inst, "rr\n", 3))
		rr(a, b);
	else if (!ft_strncmp(inst, "rra\n", 4))
		rra(a);
	else if (!ft_strncmp(inst, "rrb\n", 4))
		rrb(b);
	else if (!ft_strncmp(inst, "rrr\n", 4))
		rrr(a, b);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	*instruction;

	init(argc, argv, &a, &b);
	instruction = get_next_line(STDIN_FILENO);
	while (instruction)
	{
		execute_instruction(instruction, &a, &b);
		free(instruction);
		instruction = get_next_line(STDIN_FILENO);
	}
	free(instruction);
	if (!check_sorted(&a))
	{
		write(STDOUT_FILENO, "KO\n", 3);
		exit(EXIT_FAILURE);
	}
	else
	{
		write(STDOUT_FILENO, "OK\n", 3);
		exit(EXIT_SUCCESS);
	}
}
