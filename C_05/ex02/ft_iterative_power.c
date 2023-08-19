/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:03:18 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 17:54:20 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	long	rtnb;

	i = 1;
	rtnb = nb;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (i < power)
	{
		rtnb *= nb;
		i++;
	}
	if (rtnb > 2147483647 || rtnb < -2147483648)
		return (0);
	return (rtnb);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%i \n", ft_iterative_power(9,0));
// 	return (0);
// }
