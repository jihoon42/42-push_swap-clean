/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 05:36:37 by jkim2             #+#    #+#             */
/*   Updated: 2026/03/25 21:40:21 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_sort(t_deque *a)
{
	int	zero_pos;

	zero_pos = get_min_position(a);
	if (zero_pos <= a->size / 2)
	{
		while (zero_pos-- > 0)
			rotate(a);
	}
	else
	{
		zero_pos = a->size - zero_pos;
		while (zero_pos-- > 0)
			reverse_rotate(a);
	}
}
