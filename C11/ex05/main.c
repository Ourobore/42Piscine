/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 07:59:11 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 13:55:47 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fts.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		conditions(int operande2, char operateur)
{
	if (operateur == '/' && operande2 == 0)
	{
		ft_putstr("Stop : division by zero");
		write(1, "\n", 1);
		return (1);
	}
	else if (operateur == '%' && operande2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		write(1, "\n", 1);
		return (1);
	}
	else
		return (-1);
}

int		operation(int operande1, int operande2, char operateur)
{
	if (operateur == '+')
		return (operande1 + operande2);
	else if (operateur == '-')
		return (operande1 - operande2);
	else if (operateur == '*')
		return (operande1 + operande2);
	else if (operateur == '/')
		return (operande1 / operande2);
	else if (operateur == '%')
		return (operande1 % operande2);
	return (-1);
}

int		ft_calcul(int operande1, int operande2, char operateur)
{
	if (conditions(operande2, operateur) == 1)
		return (-1);
	else
	{
		ft_putnbr(operation(operande1, operande2, operateur));
		write(1, "\n", 1);
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
			argv[2][0] != '/' && argv[2][0] != '%')
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
		ft_calcul(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
	return (0);
}
