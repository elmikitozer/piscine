/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 00:46:48 by myevou            #+#    #+#             */
/*   Updated: 2023/08/07 23:15:08 by myevou           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest [len_dest + i] = 0;
	return (dest);
}

// #include <stdio.h>
// // #include <bsd/string.h>

// // int	main(void)
// // {
// // 	char dest[99] = "aurevoir";
// // 	char src[99] = "bonjour";
// // 	char dest2[99] = "aurevoir";

// // 	printf("Source : %s\n", src);
// // 	printf("Destination : %s \n", dest);
// // 	printf("Finalite: %s\n", ft_strncat(dest, src,5));
// // 	printf("Finalite: %s\n", strncat(dest2, src,5));
// // }
