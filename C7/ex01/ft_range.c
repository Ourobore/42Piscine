/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 07:25:18 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/11 18:15:57 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *pt_range;
	int compteur;
	int i;

	i = 0;
	pt_range = NULL;
	compteur = min;
	if (min >= max)
		return (pt_range);
	pt_range = malloc(sizeof(*pt_range) * (max - min));
	if (pt_range == NULL)
		return (pt_range);
	while (i < max - min)
	{
		*(pt_range + i) = compteur;
		compteur++;
		i++;
	}
	return (pt_range);
}
