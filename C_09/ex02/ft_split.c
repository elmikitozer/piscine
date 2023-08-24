/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:39:55 by myevou            #+#    #+#             */
/*   Updated: 2023/08/23 14:30:37 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_charset(char *str, char *charset, int p)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == str[p])
			return (1);
		i++;
	}
	return (0);
}

void	pass_sep(char *str, char *charset, int *p)
{
	while ((ft_charset(str, charset, *p) == 1) && str[*p])
	*p = *p + 1;
}

char	**ft_split(char *str, char *charset)
{
	int		p;
	int		i;
	int		j;
	char	**split;

	p = 0;
	i = 0;
	split = malloc(sizeof(char *) * 250);
	if (!split)
		return (0);
	pass_sep(str, charset, &p);
	while (str[p])
	{
		split[i] = malloc(sizeof(char) * 4000);
		if (!split[i])
			return (NULL);
		j = 0;
		while ((!ft_charset(str, charset, p)) && str[p])
			split[i][j++] = str[p++];
		split[i][j] = 0;
		pass_sep(str, charset, &p);
		i++;
	}
	split[i] = 0;
	return (split);
}

// int	main(void)
// {
// 	char str[29] = {"La vie en vaut la chandellet"};
// 	char sep[5] = {"vat"};
// 	char **tabl;
// 	tabl = ft_split(str, sep);
// 	int i = 0;

// 	while (tabl[i])
// 	{
// 		// test = tabl[i];
// 		printf("%s\n", tabl[i]);
// 		// j = 0;
// 		// while (tabl[i][j])
// 		// {
// 		// 	write(1,&tabl[i][j],1);
// 		// 	j++;
// 		// }
// 		// write(1, "\n", 1);
// 		free(tabl[i]);
// 		i++;
// 	}
// 	free (tabl);
// 	return 0;
// }

// #include <stdlib.h>
// #include <stdio.h>

// char    **ft_split(char *str, char *charset);

// int        c_strlen(char *str)
// {
//     int len;

//     len = 0;
//     while (str[len])
//         len++;
//     return (len);
// }

// int        c_strctn(char *str1, char *str2, int at)
// {
//     int    len;
//     int    i;

//     len = c_strlen(str2);
//     i = 0;
//     while (i < len)
//     {
//         str1[at + i] = str2[i];
//         i++;
//     }
//     str1[at + i] = 0;
//     return (len + at);
// }

// char    *c_strautojoin(char **strs, char *sep)
// {
//     char    *str;
//     int        len;
//     int        seplen;
//     int        i;
//     int        j;

//     len = 1;
//     seplen = c_strlen(sep);
//     i = 0;
//     while (strs[i] != NULL)
//     {
//         len += c_strlen(strs[i]);
//         if (strs[i + 1] != NULL)
//             len += seplen;
//         i++;
//     }
//     str = malloc(len * sizeof(char));
//     i = 0;
//     j = 0;
//     while (strs[j])
//     {
//         i = c_strctn(str, strs[j++], i);
//         if (strs[j])
//             i = c_strctn(str, sep, i);
//     }
//     return (str);
// }
