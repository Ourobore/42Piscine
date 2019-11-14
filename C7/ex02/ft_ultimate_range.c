/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 08:22:48 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/11 20:50:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int compteur;

	compteur = 0;
	i = 0;
	*range = NULL;
	if (min >= max)
		return (0);
	else
	{
		compteur = min;
		*range = malloc((max - min) * sizeof(int));
		if (range == NULL)
			return (-1);
		while (i < max - min)
		{
			(*range)[i] = compteur;
			i++;
			compteur++;
		}
		return (i);
	}
}
