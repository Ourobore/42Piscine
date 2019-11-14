/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 08:54:55 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/08 22:28:29 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_conditions(int tab_arg[16], int tab[4][4], int x, int y);
int		erreur_arg(int argc, char **argv);
int		erreur_arg_suite(int tab[16], char **argv);
void	extract_arg(int tab_arg[16], char **argv);
int		arg_valides(int tab_arg[16]);

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_plateau(int plateau[4][4])
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tmp = plateau[i][j] + 48;
			write(1, &tmp, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	init_plateau(int plateau[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			plateau[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int tab_arg[16];
	int plateau[4][4];

	if (erreur_arg(argc, argv) != 1)
	{
		print_error();
		return (0);
	}
	extract_arg(tab_arg, argv);
	if (arg_valides(tab_arg) != 1)
	{
		print_error();
		return (0);
	}
	init_plateau(plateau);
	print_plateau(plateau);
}
