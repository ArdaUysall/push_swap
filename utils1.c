/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:46:56 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:46:59 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**add_to_list(int ac, char **av, t_arg *arg)
{
	char	**str_list;

	if (ac == 2)
	{
		arg->has_arg = 1;
		str_list = ft_split(av[1], ' ');
	}
	else
		str_list = av + 1;
	return (str_list);
}

int	is_sorted(t_stack **stack, char c, int len)
{
	int		i;
	t_stack	*first;

	first = (*stack);
	i = 1;
	if (c == 'a')
	{
		while (i++ < len)
		{
			if (first->d > first->n->d)
				return (0);
			first = first->n;
		}
	}
	first = (*stack);
	if (c == 'b')
	{
		while (i++ < len)
		{
			if (first->d < first->n->d)
				return (0);
			first = first->n;
		}
	}
	return (1);
}

int	stack_size(t_stack *a)
{
	int		i;

	i = 0;
	if (!a)
		return (0);
	while (a)
	{
		a = a->n;
		i++;
	}
	return (i);
}

t_stack	*laststack(t_stack **stack)
{
	t_stack	*last;

	last = (*stack);
	while (last->n)
		last = last->n;
	return (last);
}

t_stack	*ft_stacknew(int nb)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->d = nb;
	new->n = NULL;
	return (new);
}
