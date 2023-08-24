/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:13:35 by myevou            #+#    #+#             */
/*   Updated: 2023/08/24 19:28:11 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	counter;
	int	counter_rev;

	i = 0;
	counter = 0;
	counter_rev = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			counter++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			counter_rev++;
		i++;
	}
	if ((counter == i) || (counter_rev == i))
		return (1);
	else
		return (0);
}
