/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:45:53 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:45:58 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !(*stack)->n)
		return ;
	last = *stack;
	while (last->n)
		last = last->n;
	last->n = *stack;
	*stack = (*stack)->n;
	last->n->n = NULL;
}

void	ra(t_stack **a, int control)
{
	rotate(a);
	if (control)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int control)
{
	rotate(b);
	if (control)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int control)
{
	ra(a, control);
	rb(b, control);
	if (control)
		write (1, "rr\n", 3);
}
