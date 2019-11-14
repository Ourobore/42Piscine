/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:01:22 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/16 08:02:11 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_sep(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strdup(char *str, int m, int l)
{
	char	*pt_cpy;
	int		i;

	pt_cpy = malloc(sizeof(char) * (l + 1));
	if (pt_cpy == NULL)
		return (NULL);
	i = 0;
	while (str[i] && i < l)
	{
		*(pt_cpy + i) = *(str + (m - l + i));
		i++;
	}
	*(pt_cpy + i) = 0;
	return (pt_cpy);
}

int		nb_chaines(char *str, char *charset)
{
	int i;
	int l;
	int compteur;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	compteur = 1;
	while (str[i])
	{
		if (in_sep(charset, str[i]) != -1 && str[i + 1] != 0 &&
				in_sep(charset, str[i - 1]) == -1 && i != 0 && i != l)
			compteur++;
		i++;
	}
	return (compteur);
}

char	**attrib(char *str, char *charset, char **split)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	a = -1;
	while (str[i])
	{
		while (str[i] && in_sep(charset, str[i]) != -1)
			i++;
		while (str[i] && in_sep(charset, str[i]) == -1)
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			split[++a] = ft_strdup(str, i, j);
			j = 0;
		}
	}
	split[a + 1] = 0;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**split;

	i = 0;
	split = NULL;
	split = malloc(sizeof(split) * (nb_chaines(str, charset) + 1));
	split = attrib(str, charset, split);
	return (split);
}
