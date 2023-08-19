/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:24:24 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 20:20:04 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_putnbr_base(long long_nbr, char *base);
int		ft_strlen(char *str);

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

long	ft_atoi_base(char *str, char *base)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	long_nbr;

	if (is_error_rtrn_size(base_from) <= 1 || is_error_rtrn_size(base_to) <= 1)
		return (NULL);
	long_nbr = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(long_nbr, base_to));
}
// int	main(void)
// {
// 	printf("= %s\n", ft_convert_base("--++-+-+2147483648", "0123456789", "01"));
// 	return(0);
// }
