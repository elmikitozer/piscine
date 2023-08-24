/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:19:44 by myevou            #+#    #+#             */
/*   Updated: 2023/08/22 14:26:21 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		(*f)(tab[i++]);
}

// #include <unistd.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long	nblong;

// 	nblong = nb;
// 	if (nblong < 0)
// 	{
// 		ft_putchar('-');
// 		nblong = -nblong;
// 	}
// 	if (nblong >= 10)
// 	{
// 		ft_putnbr(nblong / 10);
// 	}
// 	ft_putchar(nblong % 10 + '0');
// 	write (1, "\n", 1);
// }

// int main (void)
// {
// 	static int	tab[1337] = {0};
// 	ft_foreach(tab, 1337, &ft_putnbr);
// }
