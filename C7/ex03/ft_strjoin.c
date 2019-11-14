/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:52:09 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/11 20:50:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		total_size(char **strs, char *sep, int size)
{
	int i;
	int j;
	int t_size;

	i = 0;
	t_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			t_size++;
			j++;
		}
		i++;
	}
	t_size += ft_strlen(sep) * (size - 1) + 1;
	if (size <= 0)
		t_size = 0;
	return (t_size);
}

char	*cat_chaines(char *pt_retour, char **strs, char *sep, int size)
{
	int a;
	int i;
	int j;

	a = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			pt_retour[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i + 1 != size)
			pt_retour[a++] = sep[j++];
		i++;
	}
	pt_retour[a] = 0;
	return (pt_retour);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count_char;
	char	*pt_retour;

	pt_retour = NULL;
	i = 1;
	count_char = total_size(strs, sep, size);
	if (size == 0)
	{
		pt_retour = malloc(sizeof(char) * 1);
		pt_retour[0] = 0;
		return (pt_retour);
	}
	else
	{
		pt_retour = malloc(sizeof(char) * count_char);
		cat_chaines(pt_retour, strs, sep, size);
		return (pt_retour);
	}
}
