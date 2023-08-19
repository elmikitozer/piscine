/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:15:53 by myevou            #+#    #+#             */
/*   Updated: 2023/08/07 22:38:24 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[99] = "aurevoir";
// 	char src[99] = "bonjour";
// 	char dest2[99] = "aurevoir";

// 	printf("Source : %s\n", src);
// 	printf("Destination : %s \n", dest);
// 	printf("Finalite: %s\n ", ft_strcat(dest, src));
// 	printf("Finalite: %s\n ", strcat(dest2, src));
// }
