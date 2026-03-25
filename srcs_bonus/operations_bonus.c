/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 09:26:45 by jkim2             #+#    #+#             */
/*   Updated: 2026/03/25 21:42:19 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap_silent(t_deque *q)
{
	t_node	*first;
	t_node	*second;

	if (q->size < 2)
		return ;
	first = pop_front(q);
	second = pop_front(q);
	push_front(q, first);
	push_front(q, second);
}

void	push_silent(t_deque *dst, t_deque *src)
{
	t_node	*node;

	if (src->size == 0)
		return ;
	node = pop_front(src);
	push_front(dst, node);
}

void	rotate_silent(t_deque *q)
{
	t_node	*node;

	if (q->size < 2)
		return ;
	node = pop_front(q);
	push_back(q, node);
}

void	rev_rotate_silent(t_deque *q)
{
	t_node	*node;

	if (q->size < 2)
		return ;
	node = pop_back(q);
	push_front(q, node);
}
