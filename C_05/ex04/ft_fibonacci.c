/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:33:39 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 14:15:55 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (!index || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// #include <stdlib.h>
// int main (void)
// {
// 	printf("%i \n", ft_fibonacci(42));
// 	return (0);
// }
