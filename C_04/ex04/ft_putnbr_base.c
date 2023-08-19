/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:21:45 by myevou            #+#    #+#             */
/*   Updated: 2023/08/15 23:33:16 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	long_nbr;

	long_nbr = (long) nbr;
	if (ft_is_base(base))
	{
		if (long_nbr < 0)
		{
			ft_putchar('-');
			long_nbr = long_nbr * (-1);
		}
		len = ft_strlen(base);
		if (long_nbr / len)
			ft_putnbr_base((long_nbr / len), base);
		ft_putchar(base[long_nbr % len]);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(, "0123456789abcdef");
// }
// #include <unistd.h>

// void    ft_putnbr_base(int nbr, char *base);

// int        main(void)
// {
//     write(1, "42:", 3);
//     ft_putnbr_base(42, "0123456789");
//     write(1, "\n2a:", 4);
//     ft_putnbr_base(42, "0123456789abcdef");
//     write(1, "\n-2a:", 5);
//     ft_putnbr_base(-42, "0123456789abcdef");
//     write(1, "\n:", 2);
//     ft_putnbr_base(42, "");
//     write(1, "\n:", 2);
//     ft_putnbr_base(42, "0");
//     write(1, "\n:", 2);
//     ft_putnbr_base(42, "+-0123456789abcdef");
//     write(1, "\n:", 2);
//     ft_putnbr_base(40, "\t01230456789abcdef");
// }
