/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:25:54 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 12:25:57 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int s)
{
	if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
	{
		return (1);
	}
	return (0);
}