/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:42:16 by myevou            #+#    #+#             */
/*   Updated: 2023/08/22 17:52:16 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = malloc(sizeof(int) * length);
	if (!res)
		return (0);
	res[0] = 0;
	i = 0;
	while (i < length)
		res[i] = (*f)(tab[i++]);
	return (res);
}
