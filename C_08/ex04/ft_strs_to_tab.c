/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:19:07 by myevou            #+#    #+#             */
/*   Updated: 2023/08/22 14:04:50 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
// #include "ft_show_tab.c"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ret_p;
	int		i;

	i = 0;
	ret_p = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!ret_p)
		return (NULL);
	while (src[i])
	{
		ret_p[i] = src[i];
		i++;
	}
	ret_p[i] = '\0';
	return (ret_p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}

// int main()
// {
// 	char *ex[] = {"hello", "lalal", "cats"};
// 	t_stock_str *res = ft_strs_to_tab(3, ex);
// 	ft_show_tab(res);
// }
