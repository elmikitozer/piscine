/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:39:55 by myevou            #+#    #+#             */
/*   Updated: 2023/08/19 19:32:03 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

int	find_seg_place(char *str, char *charset, int place)
{
	int	i;
	int	m;
	int	j;

	i = 0;
	m = ft_strlen(str);
	while (charset[i])
	{
		j = place;
		while (str[j])
		{
			if (charset[i] == str[j])
			{
				if (j < m || m == ft_strlen(str))
				{
					m = j;
				}
				break ;
			}
			j++;
		}
		i++;
	}
	return (m);
}

char	*first_line(char *str, int in)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * in + 2);
	if (!res)
		return (NULL);
	*res = 0;
	while (i < in)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	*create_line(char *str, int in, int out)
{
	int		j;
	int		i;
	char	*tab;

	tab = malloc(sizeof(char) * (out - in + 1));
	if (!tab)
		return (NULL);
	*tab = 0;
	i = in + 1;
	j = 0;
	while (i < out)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		in;
	int		out;
	int		line;
	char	**tabl;

	line = 0;
	out = 0;
	tabl = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!tabl)
		return (NULL);
	*tabl = 0;
	in = find_seg_place(str, charset, out);
	line = 0;
	if (in != 0)
		tabl[line++] = first_line(str, in);
	while (out < ft_strlen(str))
	{
		in = find_seg_place(str, charset, out);
		out = find_seg_place(str, charset, in + 1);
		if (out != in + 1)
			tabl[line++] = create_line(str, in, out);
	}
	tabl[line] = 0;
	return (tabl);
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
