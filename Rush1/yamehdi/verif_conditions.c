/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:27:02 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/08 22:28:46 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	absent_sur_ligne(int tab[4][4], int x, int y);
int	absent_sur_colonne(int tab[4][4], int x, int y);
int	absent_sur_colign(int tab[4][4], int x, int y);

int	check_colup(int tab[4][4], int tab_arg[16], int x)
{
	int i;
	int top;
	int compteur;

	i = 0;
	top = 0;
	compteur = 0;
	while (i < 4)
	{
		if (top < tab[x][i])
		{
			top = tab[x][i];
			compteur++;
		}
		i++;
	}
	if (tab[x][3] != 0)
	{
		if (compteur != tab_arg[x])
			return (0);
		else
			return (1);
	}
	return (1);
}

int	check_coldown(int tab[4][4], int tab_arg[16], int x)
{
	int i;
	int top;
	int compteur;

	i = 3;
	top = 0;
	compteur = 0;
	while (i >= 0)
	{
		if (top < tab[x][i])
		{
			top = tab[x][i];
			compteur++;
		}
		i--;
	}
	if (tab[x][3] != 0)
	{
		if (compteur != tab_arg[x + 4])
			return (0);
		else
			return (1);
	}
	return (1);
}

int	check_leftrow(int tab[4][4], int tab_arg[16], int y)
{
	int i;
	int top;
	int compteur;

	i = 0;
	top = 0;
	compteur = 0;
	while (i < 4)
	{
		if (top < tab[i][y])
		{
			top = tab[i][y];
			compteur++;
		}
		i++;
	}
	if (tab[3][y] != 0)
	{
		if (compteur != tab_arg[y + 8])
			return (0);
		else
			return (1);
	}
	return (1);
}

int	check_rightrow(int tab[4][4], int tab_arg[16], int y)
{
	int i;
	int top;
	int compteur;

	i = 3;
	top = 0;
	compteur = 0;
	while (i >= 0)
	{
		if (top < tab[i][y])
		{
			top = tab[i][y];
			compteur++;
		}
		i--;
	}
	if (tab[3][y] != 0)
	{
		if (compteur != tab_arg[y + 12])
			return (0);
		else
			return (1);
	}
	return (1);
}

int	check_conditions(int tab_arg[16], int tab[4][4], int x, int y)
{
	if (absent_sur_colign(tab, x, y) && check_colup(tab, tab_arg, x) &&
			check_coldown(tab, tab_arg, x) && check_leftrow(tab, tab_arg, y) &&
			check_rightrow(tab, tab_arg, y))
		return (1);
	else
		return (0);
}
