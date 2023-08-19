/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:03:18 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 13:54:55 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb -1;
	if (!nb)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (n > 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
// #include <stdio.h>
// int main (void)
// {
// 	printf("%i \n", ft_iterative_factorial(9));
// 	return (0);
// }
