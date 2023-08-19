/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:35:22 by myevou            #+#    #+#             */
/*   Updated: 2023/08/09 10:23:28 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign ;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		nb = nb * 10 + ((*str - '0' ) * sign);
		str++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("= %i\n", ft_atoi("    +--+1234ab567"));
// }
