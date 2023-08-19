/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:03:18 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 14:42:30 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	while (i <= nb / i && i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// // int main (void)
// {
// 	(void) argc;
// 	printf("%i \n", ft_sqrt(atoi(argv[1])));
// 	// printf("%i \n", ft_sqrt(2147483647));
// 	return (0);
// }
