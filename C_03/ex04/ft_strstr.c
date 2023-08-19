/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:20:42 by myevou            #+#    #+#             */
/*   Updated: 2023/08/13 15:28:13 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_found(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!to_find[0])
		return (str);
	while (*str)
	{
		if (str[0] == to_find[0] && is_found(str, to_find) != 0)
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	t[] = "salut, comment tu vas ? cinquante-et-un quarante-deux!";
// 	printf("%s -> ", t);
// 	printf("%s\n", ft_strstr(t, "ante-d"));
// 	printf("%s -> ", t);
// 	printf("%s\n", strstr(t, ""));
// 	return(0);
// }
