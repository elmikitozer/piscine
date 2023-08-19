/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 00:55:56 by myevou            #+#    #+#             */
/*   Updated: 2023/08/07 12:12:54 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'z' && str [i] < 'a'))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>

int    main(void)
{
    int is_alpha;
	int is_alphab;
    char a[] = "eudqh4q344jhf";
	char b[] = "JeNeContiensQueDesAlphabeticalChar";
    is_alpha = ft_str_is_alpha(a);
	is_alphab = ft_str_is_alpha(b);
    printf("%i = 0, %i = 1",is_alpha, is_alphab );
} */
