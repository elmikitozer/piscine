/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:35:18 by myevou            #+#    #+#             */
/*   Updated: 2023/08/07 22:28:59 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (!s1[i])
		return (-s2[i]);
	else if (!s2[i])
		return (s1[i]);
	else
		return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "A";
// 	s2 = "As";
// 	printf("S1 : %s\n", s1);
// 	printf("S2 : %s\n", s2);
// 	printf("Result ft_strcmp : %i\n", ft_strcmp(s1, s2));
// 	printf("Result strcmp : %i\n", strcmp(s1, s2));
// }
