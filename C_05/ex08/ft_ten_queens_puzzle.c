/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:26:53 by myevou            #+#    #+#             */
/*   Updated: 2023/08/17 18:00:28 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_sol(int *queens, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = '0' + queens[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_position(int *queens, int col, int value)
{
	int	i;

	i = 0;
	if (col == 0)
		return (1);
	while (i < col)
	{
		if (value == queens[i])
			return (0);
		if (value == queens[i] + col - i || value == queens[i] - col + i)
			return (0);
		i++;
	}
	return (1);
}

void	backtrack(int *queens, int col, int *max)
{
	if (col == 10)
	{
		ft_print_sol(queens, 10);
		*max = *max + 1;
		return ;
	}
	queens[col] = 0;
	while (queens[col] < 10)
	{
		if (check_position(queens, col, queens[col]))
			backtrack(queens, col + 1, &(*max));
		queens[col]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	max;
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	max = 0;
	backtrack(tab, 0, &max);
	return (max);
}
// #include<stdio.h>

// int main (void)
// {
// 	printf("%i\n", ft_ten_queens_puzzle());
// }
