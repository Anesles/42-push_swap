/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:22:20 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/25 15:09:53 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void	error_msg(char *msg, int len, int out)
{
	write(STDOUT_FILENO, msg, len);
	exit(out);
}

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
	else
		send_error("");
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	*instruction;

	instruction = NULL;
	if (argc > 1)
	{
		init(argc, argv, &a, &b);
		while (1)
		{
			instruction = get_next_line(STDIN_FILENO);
			if (instruction == NULL)
				break ;
			execute_instruction(instruction, &a, &b);
			free(instruction);
		}
		free(instruction);
		if (!check_sorted(&a))
			error_msg("KO\n", 3, EXIT_FAILURE);
		else
			error_msg("OK\n", 3, EXIT_SUCCESS);
	}
}
