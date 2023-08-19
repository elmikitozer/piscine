/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:10:17 by myevou            #+#    #+#             */
/*   Updated: 2023/08/09 23:21:44 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_cprintable(char c)
{
	if ((c < 32) || (c == 127))
		return (0);
	return (1);
}

void	print_hex(unsigned char hex)
{
	int		div;
	int		mod;
	char	*base;

	base = "0123456789abcdef";
	div = hex / 16;
	mod = hex % 16;
	ft_putchar('\\');
	ft_putchar(base[div]);
	ft_putchar(base[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_cprintable(str[i]))
			ft_putchar(str[i]);
		else
			print_hex(str[i]);
		i++;
	}
}
// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }
