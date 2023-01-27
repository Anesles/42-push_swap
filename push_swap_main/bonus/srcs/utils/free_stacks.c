/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:24:05 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/25 14:50:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	free_stacks(t_stack *a, t_stack *b, char *msg)
{
	free(a->list);
	free(b->list);
	send_error(msg);
}
