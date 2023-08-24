/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:52:20 by myevou            #+#    #+#             */
/*   Updated: 2023/08/24 18:08:34 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
