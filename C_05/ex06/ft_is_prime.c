/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:28:02 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 14:09:50 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2 ;
	if (nb == 2)
		return (1);
	if (!(nb % 2) || nb < 2)
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

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%i \n", ft_is_prime(atoi(argv[1])));
// 	return (0);
// }
