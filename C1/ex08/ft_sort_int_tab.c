/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:57:30 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/01 18:21:25 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int curseur;
	int tmp;

	curseur = 0;
	while (curseur < size - 1)
	{
		if (tab[curseur] > tab[curseur + 1])
		{
			tmp = tab[curseur];
			tab[curseur] = tab[curseur + 1];
			tab[curseur + 1] = tmp;
			curseur = 0;
		}
		else
			curseur++;
	}
}
