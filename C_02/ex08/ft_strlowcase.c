/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 03:22:17 by myevou            #+#    #+#             */
/*   Updated: 2023/08/09 23:20:50 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// #include <unistd.h>

// char	*ft_strlowcase(char *str);

// void	ft_putstr(char *str)
// {
// 	int l;

// 	l = 0;
// 	while (str[l])
// 	{
// 		l++;
// 	}
// 	write(1, str, l);
// }
// // int		main()
// // {
// // 	char c[] = "JesiDad-4akd";
// // 	ft_putstr("jesidad-4akd:");
// // 	ft_putstr(ft_strlowcase(c));
// // 	ft_putstr(":");
// // 	ft_putstr(c);
// // }
