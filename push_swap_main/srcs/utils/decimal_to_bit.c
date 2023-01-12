/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_to_bit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:58:02 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/11 19:25:07 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	decimal_to_bit(int decimal)
{
	int	binary;
	int	i;

	i = 1;
	binary = 0;
	while (decimal > 0)
	{
		binary += (decimal & 1) * i;
		decimal = decimal >> 1;
		i *= 10;
	}
	return (binary);
}
