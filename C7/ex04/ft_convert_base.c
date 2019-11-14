/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:20:25 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 21:09:39 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		in_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (length_base(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t' ||
				base[i] == '\n' || base[i] == '\v' || base[i] == '\f' ||
				base[i] == '\r' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	calcul_taille_chaine(int nbr, char *base_to, int *c)
{
	if (nbr < 0)
		*c = *c + 1;
	if (nbr >= 0 && nbr <= length_base(base_to) - 1)
		*c = *c + 1;
	else
	{
		calcul_taille_chaine(nbr / 10, base_to, c);
		*c = *c + 1;
	}
}

char	*putnbr_base(int nbr, char *base_to, char *chaine)
{
	int i;
	int	longueur_b;

	i = 0;
	longueur_b = length_base(base_to);
	if (verif_base(base_to) == 1)
	{
		if (nbr < 0)
		{
			chaine[i++] = '-';
			nbr *= -1;
		}
		if (nbr >= 0 && nbr <= longueur_b - 1)
			chaine[i++] = base_to[nbr];
		else
		{
			putnbr_base(nbr / longueur_b, base_to, chaine);
			chaine[i++] = base_to[(nbr % longueur_b)];
		}
	}
	chaine[i] = 0;
	return (chaine);
}
