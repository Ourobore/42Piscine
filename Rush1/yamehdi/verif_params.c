/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:53:56 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/08 22:29:22 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	extract_arg(int tab_arg[16], char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][j] >= '1' && argv[1][j] <= '4')
			tab_arg[i] = argv[1][j] - 48;
		i++;
		j += 2;
	}
}

int		erreur_arg_suite(char **argv)
{
	int i;

	i = 0;
	if (ft_strlen(argv[1]) != 31)
		return (0);
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (0);
		}
		else if (i % 2 == 1)
		{
			if (argv[1][i] != 32)
				return (0);
		}
		i++;
	}
	return (1);
}

int		erreur_arg(int argc, char **argv)
{
	int retour;

	if (argc != 2)
		return (0);
	retour = erreur_arg_suite(argv);
	if (retour == 0)
		return (0);
	else
		return (1);
}

int		arg_valides(int tab_arg[16])
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (tab_arg[i] + tab_arg[i + 4] >= 3 && tab_arg[i] + tab_arg[i + 4] <= 5)
	{
		compteur++;
		if (i == 3)
			i = 7;
		i++;
	}
	if (compteur != 8)
		return (0);
	else
		return (1);
}
