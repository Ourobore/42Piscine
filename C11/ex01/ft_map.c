/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:31:34 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/16 09:01:58 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *retour;

	i = 0;
	retour = NULL;
	retour = malloc(sizeof(int) * length);
	if (retour == NULL)
		return (retour);
	while (i < length)
	{
		retour[i] = f(tab[i]);
		i++;
	}
	return (retour);
}
