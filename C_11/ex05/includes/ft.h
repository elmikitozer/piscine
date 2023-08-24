/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:05:59 by myevou            #+#    #+#             */
/*   Updated: 2023/08/24 15:09:32 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		add(int x, int y);
int		minus(int x, int y);
int		mult(int x, int y);
int		div(int x, int y);
int		mod(int x, int y);
// int		(*select_op(char choice))(int, int);
void	*select_op(char choice);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
