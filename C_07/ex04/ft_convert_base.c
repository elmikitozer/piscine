/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:36:26 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 19:50:00 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1 ;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	return (1);
}

char	*nbr_negatif(int *i, char *res, long *long_nbr)
{
	*i = *i + 1;
	res[0] = '-';
	*long_nbr = *long_nbr * (-1);
	return (res);
}

int	length_nb_newbase(int *len, int size_base, int *i)
{
	*len = *len / size_base;
	*i = *i + 1;
	return (*i);
}

char	*ft_putnbr_base(long long_nbr, char *base)
{
	int		len;
	int		i;
	int		size_base;
	char	*res;

	i = 0;
	len = long_nbr;
	size_base = ft_strlen(base);
	if (len == 0)
		i = 1;
	while (len)
		i = length_nb_newbase(&len, size_base, &i);
	res = malloc(sizeof(char) * i + 2);
	if (long_nbr < 0)
		nbr_negatif(&i, res, &long_nbr);
	else
		res[i] = 0;
	while (--i)
	{
		res[i] = base[long_nbr % size_base];
		long_nbr /= size_base;
	}
	if (res[0] != '-')
		res[0] = base[long_nbr % size_base];
	return (res);
}
