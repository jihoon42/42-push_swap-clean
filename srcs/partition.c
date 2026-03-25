/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 05:36:37 by jkim2             #+#    #+#             */
/*   Updated: 2026/03/25 21:40:10 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	partition_loop(t_deque *a, t_deque *b, int p1, int p2)
{
	int	count;

	count = a->size;
	while (count-- > 0 && a->size > 3)
	{
		if (a->front->data < p1)
			push(b, a);
		else if (a->front->data < p2)
		{
			push(b, a);
			rotate(b);
		}
		else
			rotate(a);
	}
}

void	partition_to_b(t_deque *a, t_deque *b)
{
	int	total;
	int	p1;
	int	p2;

	total = a->size;
	p1 = total / 3;
	p2 = (total * 2) / 3;
	partition_loop(a, b, p1, p2);
	while (a->size > 3)
		push(b, a);
	sort_three(a);
}
