/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:59:02 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 21:55:02 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * 4096);
	if (!tab)
		return (0);
	*tab = 0;
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i + 1 < size)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
// #include <stdio.h>
// int main()
// {
// char *strs[] = {"Salut", "Les","Gars","Soleil", "", "z","C", "D"};
// char sep[] = {"|-**-|"};
// int size = 8;
// printf("%s",ft_strjoin(size, strs, sep));
// return (0);
// }
