/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evuichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:29:16 by evuichar          #+#    #+#             */
/*   Updated: 2019/09/08 22:28:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	absent_sur_ligne(int tab[4][4], int x, int y)
{
	int i;
	int nb;

	i = 0;
	nb = tab[x][y];
	while (i < 4)
	{
		if (tab[i][y] == nb && i != x)
			return (0);
		i++;
	}
	return (1);
}

int	absent_sur_colonne(int tab[4][4], int x, int y)
{
	int i;
	int nb;

	i = 0;
	nb = tab[x][y];
	while (i < 4)
	{
		if (tab[x][i] == nb && i != y)
			return (0);
		i++;
	}
	return (1);
}

int	absent_sur_colign(int tab[4][4], int x, int y)
{
	if (absent_sur_ligne(tab, x, y) == 1 && absent_sur_colonne(tab, x, y) == 1)
		return (1);
	else
		return (0);
}
