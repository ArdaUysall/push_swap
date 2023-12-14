/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:44:38 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 11:44:40 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				d;
	struct s_stack	*n;
}	t_stack;

typedef struct s_arg
{
	int		has_arg;
}	t_arg;

//source1
void	swap(t_stack **stack);
void	sa(t_stack **a, int control);
void	sb(t_stack **b, int control);
void	ss(t_stack **a, t_stack **b, int control);
//source2
void	rotate(t_stack **stack);
void	ra(t_stack **a, int control);
void	rb(t_stack **b, int control);
void	rr(t_stack **a, t_stack **b, int control);
//source3
void	rrotate(t_stack **stack);
void	rra(t_stack **a, int control);
void	rrb(t_stack **b, int control);
void	rrr(t_stack **a, t_stack **b, int control);
//source4
void	pa(t_stack **a, t_stack **b, int control);
void	pb(t_stack **b, t_stack **a, int control);
//utils1
char	**add_to_list(int ac, char **av, t_arg *arg);
int		is_sorted(t_stack **stack, char c, int len);
int		stack_size(t_stack *a);
t_stack	*laststack(t_stack **stack);
t_stack	*ft_stacknew(int nb);
//utils2
void	init_stack_a(t_stack **stack_a, char **list);
int		is_int_item(char *lst);
void	push_init(t_stack **stack, int nb);
int		is_init_list(char **list);
int		is_duplicate(char **list);
//utils3
void	ft_stack_clear(t_stack **stack);
void	error_case(char *s, int status);
void	check_arguments(char **str_list, t_arg *arg);
//function2.c
int		ft_push(t_stack **a, t_stack **b, int len, int operation);
void	ft_sort_three(t_stack **a);
void	ft_sort_int_tmp(int *tmp_stack, int size);
int		ft_sort(t_stack **a, t_stack **b, int size);
//function3.c
int		ft_sort_small_b(t_stack **a, t_stack **b, int len);
void	ft_quicksort_3a(t_stack **a, t_stack **b, int len);
int		ft_get_middle(int *pivot, t_stack **stack_a, int size);
int		ft_quicksort_a(t_stack **a, t_stack **b, int len, int count);
int		ft_quicksort_b(t_stack **a, t_stack **b, int len, int count);
//checker.c
void	error(t_stack **a, t_stack **b, int flag);
void	run(char *str, t_stack **a, t_stack **b);
void	check(char *str, t_stack **a, t_stack **b);
void	print(t_stack **a, t_stack **b);
#endif
