/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkim2 <jkim2@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 05:36:37 by jkim2             #+#    #+#             */
/*   Updated: 2026/03/25 21:40:00 by jkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_deque *a)
{
	t_node	*curr;

	curr = a->front;
	while (curr && curr->next)
	{
		if (curr->data > curr->next->data)
			return (0);
		curr = curr->next;
	}
	return (1);
}

void	free_deque(t_deque *q)
{
	t_node	*curr;
	t_node	*next;

	if (!q)
		return ;
	curr = q->front;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	q->front = NULL;
	q->back = NULL;
	q->size = 0;
}
