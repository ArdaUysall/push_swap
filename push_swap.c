/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:44:19 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:44:22 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**str_list;
	t_stack	*a;
	t_stack	*b;
	t_arg	arg;

	a = NULL;
	b = NULL;
	arg.has_arg = 0;
	if (ac >= 2)
	{
		str_list = add_to_list(ac, av, &arg);
		check_arguments(str_list, &arg);
		init_stack_a(&a, str_list);
		ft_sort(&a, &b, stack_size(a));
		if (arg.has_arg)
			ft_malloc_error(str_list);
	}
	ft_stack_clear(&a);
}
