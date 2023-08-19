/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:23:30 by myevou            #+#    #+#             */
/*   Updated: 2023/08/08 11:03:57 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_num(char f)
{
	if (f >= '0' && f <= '9')
		return (1);
	if (f >= 'A' && f <= 'Z')
		return (1);
	if (f >= 'a' && f <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	f;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		f = str[i];
		if ((j == 1) && (f >= 'a') && (f <= 'z'))
			str[i] -= 32;
		else if ((j == 0) && (f >= 'A') && (f <= 'Z'))
			str[i] += 32;
		if (!is_alpha_num(f))
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
