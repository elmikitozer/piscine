/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:21:45 by myevou            #+#    #+#             */
/*   Updated: 2023/08/15 22:06:05 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dest_size >= size)
		return (src_size + size);
	while (src[i] != '\0' && i < (size - dest_size - 1))
	{
			dest[dest_size + i] = src[i];
			i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char src[8] = "bonsoir";
// 	char dest[15] = "aurevoir124\0\0\0\0";
// 	char dest1[15] = "aurevoir124\0\0\0\0";

// 	printf("Source : %s\n", src);
// 	printf("Destination : %s \n", dest);
// 	printf("Finalite: %d\n ", ft_strlcat(dest, src, 0));
// 	printf("Destination : %s \n", dest1);
// 	printf("Finalite: %ld\n ", strlcat(dest1, src, 0));
// 	printf("Destination : %s \n", dest);
// }
