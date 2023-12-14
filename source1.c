/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:44:58 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:45:01 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->n)
		return ;
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->n->n;
	tmp->n = *stack;
	*stack = tmp;
}

void	sa(t_stack **a, int control)
{
	swap(a);
	if (control)
		write (1, "sa\n", 3);
}

void	sb(t_stack **b, int control)
{
	swap(b);
	if (control)
		write (1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, int control)
{
	sa (a, control);
	sb (b, control);
	if (control == 1)
		write (1, "ss\n", 3);
}
