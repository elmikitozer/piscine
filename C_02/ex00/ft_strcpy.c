/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:58:48 by myevou            #+#    #+#             */
/*   Updated: 2023/08/06 16:37:41 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *s = strcpy("nplsdhdhg", "qw");
	printf("%s", s);
	//printf("%s", ft_strcpy("nplsdhdh", "qw"));
}*/
