/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:59:30 by myevou            #+#    #+#             */
/*   Updated: 2023/08/23 12:02:30 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	add(int x, int y)
{
	return (x + y);
}

int	minus(int x, int y)
{
	return (x - y);
}

int	mult(int x, int y)
{
	return (x * y);
}

int	div(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}
	else
		return (x / y);
}

int	mod(int x, int y)
{
	if (y == 0)
	{
		return (0);
	}
	else
		return (x % y);
}
