/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:36:37 by myevou            #+#    #+#             */
/*   Updated: 2023/08/23 11:59:56 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	(*operation)(int, int);

	if (argc != 4)
		return (-1);
	operation = select_op(argv[2][0]);
	if ((argv[2][0] == '%') && (ft_atoi(argv[3]) == 0))
		write (1, "Stop : modulo by zero", 21);
	else if ((argv[2][0] == '/') && (ft_atoi(argv[3]) == 0))
		write (1, "Stop : division by zero", 23);
	else
		ft_putnbr(operation(ft_atoi(argv[1]), ft_atoi(argv[3])));
	write(1, "\n", 1);
	return (0);
}
