/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 08:51:22 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:03:03 by ayuroyet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**conv_symbols(char **tab, char vide, char obs)
{
	long int i;
	long int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == vide)
				tab[i][j] = '1';
			else if (tab[i][j] == obs)
				tab[i][j] = '0';
			j++;
		}
		i++;
	}
	return (tab);
}

int		**transfer(char **tab, int **n_tab)
{
	long int i;
	long int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			n_tab[i][j] = tab[i][j] - 48;
			j++;
		}
		i++;
	}
	return (n_tab);
}

int		**char_to_int(char **tab)
{
	long int	i;
	long int	j;
	long int	l;
	int			**n_tab;

	i = 0;
	j = get_params(get_string()).nb_lines;
	l = get_params(get_string()).longueur;
	if (!(n_tab = malloc(sizeof(int*) * j)))
		return (0);
	i = 0;
	while (tab[i])
	{
		if (!(n_tab[i] = malloc(sizeof(int) * l)))
			return (0);
		i++;
	}
	return (transfer(tab, n_tab));
}
