/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:34:49 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 17:25:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		verif_base(char *base);
int		in_base(char *base, char c);
int		length_base(char *base);
void	calcul_taille_chaine(int nbr, char *base_to, int *c);
char	*putnbr_base(int nbr, char *base_to, char *chaine);

int		decodage(char *nbr, char *base_from)
{
	int	i;
	int n;
	int	signe;

	i = 0;
	signe = 1;
	n = 0;
	while (nbr[i] == '\t' || nbr[i] == '\n' || nbr[i] == '\v' ||
			nbr[i] == '\f' || nbr[i] == '\r' || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe *= -1;
		i++;
	}
	while (in_base(base_from, nbr[i]) != -1)
	{
		n = n * length_base(base_from) + in_base(base_from, nbr[i]);
		i++;
	}
	return (signe * n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		*c;
	char	*chaine;

	a = 0;
	c = &a;
	if (verif_base(base_from) == 1 && verif_base(base_to) == 1)
	{
		calcul_taille_chaine(decodage(nbr, base_from), base_to, c);
		chaine = malloc(sizeof(char) * a + 1);
		chaine = putnbr_base(decodage(nbr, base_from), base_to, chaine);
		return (chaine);
	}
	else
		return (NULL);
}
