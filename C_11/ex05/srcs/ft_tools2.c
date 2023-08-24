/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:01:07 by myevou            #+#    #+#             */
/*   Updated: 2023/08/24 15:09:54 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	nul(int x, int y)
{
	x = 0;
	y = x;
	return (x);
}

void	*select_op(char choice)
{
	if (choice == '+')
		return (add);
	if (choice == '-')
		return (minus);
	if (choice == '*')
		return (mult);
	if (choice == '/')
		return (div);
	if (choice == '%')
		return (mod);
	else
		return (nul);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + ((str[i] - '0') * sign);
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	long	nblong;
	char	c;

	nblong = nb;
	if (nblong < 0)
	{
		write(1, "-", 1);
		nblong = -nblong;
	}
	if (nblong >= 10)
	{
		ft_putnbr(nblong / 10);
	}
	c = nblong % 10 + '0';
	write(1, &c, 1);
}
