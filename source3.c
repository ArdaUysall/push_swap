/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:46:16 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:46:18 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !(*stack)->n)
		return ;
	last = *stack;
	while (last->n->n)
		last = last->n;
	last->n->n = *stack;
	*stack = last->n;
	last->n = NULL;
}

void	rra(t_stack **a, int control)
{
	rrotate(a);
	if (control)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int control)
{
	rrotate(b);
	if (control)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int control)
{
	rra(a, control);
	rrb(b, control);
	if (control)
		write (1, "rrr\n", 4);
}
