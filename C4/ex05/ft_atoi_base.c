/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:40:46 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 13:36:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	longueur_base(char *base)
{
	unsigned int longueur_b;

	longueur_b = 0;
	while (base[longueur_b])
		longueur_b++;
	return (longueur_b);
}

int				verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == 0)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	else
		return (1);
}

int				in_base(char *base, char c)
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

int				ft_atoi_base(char *str, char *base)
{
	int i;
	int signe;
	int nb;
	int longueur_b;

	nb = 0;
	i = 0;
	signe = 1;
	longueur_b = longueur_base(base);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (in_base(base, str[i]) != -1 && verif_base(base) == 1)
	{
		nb = (nb * longueur_b) + in_base(base, str[i]);
		i++;
	}
	return (signe * nb);
}
