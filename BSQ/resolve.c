/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 07:45:22 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:05:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			min(int **tab, long int i, long int j)
{
	long int m;

	m = tab[i - 1][j];
	if (m > tab[i][j - 1])
		m = tab[i][j - 1];
	if (m > tab[i - 1][j - 1])
		m = tab[i - 1][j - 1];
	return (m + 1);
}

int			**resolve(int **tab)
{
	long int i;
	long int j;
	long int nbl;
	long int longueur;

	i = 0;
	j = 0;
	nbl = get_params(get_string()).nb_lines;
	longueur = get_params(get_string()).longueur;
	while (i < nbl)
	{
		j = 0;
		while (j < longueur)
		{
			if (i == 0 || j == 0)
				tab[i][j] = tab[i][j];
			else if (tab[i][j] == 0)
				tab[i][j] = 0;
			else
				tab[i][j] = min(tab, i, j);
			j++;
		}
		i++;
	}
	return (tab);
}

resolved	get_coords(int **tab, long int nb_lines, long int longueur)
{
	resolved resultat;
	long int max;
	long int i;
	long int j;

	i = 0;
	max = 0;
	while (i < nb_lines)
	{
		j = 0;
		while (j < longueur)
		{
			if (max < tab[i][j])
			{
				max = tab[i][j];
				resultat.i_fin = i;
				resultat.j_fin = j;
			}
			j++;
		}
		i++;
	}
	resultat.i_deb = resultat.i_fin - (max - 1);
	resultat.j_deb = resultat.j_fin - (max - 1);
	return (resultat);
}

void		affich_result(char **tab, resolved coords, params carac)
{
	long int i;
	long int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (i >= coords.i_deb && i <= coords.i_fin &&
				j >= coords.j_deb && j <= coords.j_fin)
				tab[i][j] = carac.solution;
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
