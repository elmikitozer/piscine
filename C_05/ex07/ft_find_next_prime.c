/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:31:05 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 14:10:48 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2 ;
	if (nb == i)
		return (1);
	if (!(nb % i) || nb < i)
		return (0);
	i ++;
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (!(nb % 2))
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%i \n", ft_find_next_prime(atoi(argv[1])));
// 	return (0);
// }
