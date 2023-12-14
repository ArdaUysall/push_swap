/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:46:37 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:46:39 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b, int control)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = tmp->n;
	tmp->n = *a;
	*a = tmp;
	if (control)
		write(1, "pa\n", 3);
}

void	pb(t_stack **b, t_stack **a, int control)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = tmp->n;
	tmp->n = *b;
	*b = tmp;
	if (control)
		write(1, "pb\n", 3);
}
