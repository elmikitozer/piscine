/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:21:56 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 20:21:28 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*replica;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	replica = malloc ((size + 1) * sizeof(char));
	if (!replica)
		return (0);
	while (src[i])
	{
		replica[i] = src[i];
		i++;
	}
	replica[i] = 0;
	return (replica);
}
