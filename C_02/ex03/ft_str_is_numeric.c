/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 00:55:56 by myevou            #+#    #+#             */
/*   Updated: 2023/08/06 15:50:07 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if ((str[i] < '0') | (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
    int is_alpha;
	int is_alphab;
    char a[] = "eudqh4 q344jhf";
	char b[] = "88789498";
    is_alpha = ft_str_is_numeric(a);
	is_alphab = ft_str_is_numeric(b);
    printf("%i = 0, %i = 1",is_alpha, is_alphab);
}
*/
