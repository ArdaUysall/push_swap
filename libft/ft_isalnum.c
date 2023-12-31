/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:25:31 by auysal            #+#    #+#             */
/*   Updated: 2023/11/14 12:25:33 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int y)
{
	if ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z')
		|| (y >= '0' && y <= '9'))
	{
		return (1);
	}
	return (0);
}
