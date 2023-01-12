/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:58:17 by brumarti          #+#    #+#             */
/*   Updated: 2023/01/11 21:16:57 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlenn(const char *s)
{
	size_t	length;

	length = 0;
	if (!s)
		return (length);
	while (s[length])
		length++;
	return (length);
}
