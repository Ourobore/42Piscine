/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 07:05:58 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 08:38:26 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
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

unsigned int	longueur_base(char *base)
{
	unsigned int longueur_b;

	longueur_b = 0;
	while (base[longueur_b])
		longueur_b++;
	return (longueur_b);
}

void			ft_putnbr_base(int nbr, char *base)
{
	long int		nbl;
	unsigned int	longueur_b;
	unsigned int	i;

	i = 0;
	nbl = nbr;
	longueur_b = longueur_base(base);
	if (verif_base(base) == 1)
	{
		if (nbl < 0)
		{
			write(1, "-", 1);
			nbl = nbl * -1;
		}
		if (nbl >= 0 && nbl <= longueur_b - 1)
			ft_putchar(base[nbl]);
		else
		{
			ft_putnbr_base(nbl / longueur_b, base);
			ft_putchar(base[(nbl % longueur_b)]);
		}
	}
}
