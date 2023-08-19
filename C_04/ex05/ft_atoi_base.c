/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:24:24 by myevou            #+#    #+#             */
/*   Updated: 2023/08/11 12:50:57 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_error_rtrn_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		else
		{
			while (base[j])
			{
				if (base[i] == base[j])
					return (1);
				j++;
			}
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (i);
}

int	c_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (c == *base)
			return (i);
		i++;
		base++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nb;
	int	sz_base;

	nb = 0;
	sign = 1;
	sz_base = is_error_rtrn_size(base);
	if (sz_base <= 1)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign ;
		str++;
	}
	while (c_index_base(*str, base) != -1)
	{
		nb = nb * sz_base + (c_index_base(*str, base) * sign);
		str++;
	}
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("= %i\n", ft_atoi_base("-+--+-93de1", "0123456789abcdef"));
// }
