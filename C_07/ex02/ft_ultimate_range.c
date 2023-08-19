/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:54:55 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 20:21:09 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (0);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	*range[10];

// 	printf("%i\n", ft_ultimate_range(range, 5, 10));
// }
