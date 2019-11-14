/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 08:10:41 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 13:57:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fts.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		is(char str)
{
	if (str == ' ' || str == '\t' ||
			str == '\n' || str == '\v' || str == '\f' ||
			str == '\r')
		return (1);
	else if (str >= 48 && str <= 57)
		return (2);
	else
		return (3);
}

int		ft_atoi(char *str)
{
	int i;
	int signe;
	int nb;

	nb = 0;
	i = 0;
	signe = 1;
	while (is(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (signe * nb);
}

void	ft_putnbr(int nb)
{
	long int nbl;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = nbl * -1;
	}
	if (nbl >= 0 && nbl <= 9)
		ft_putchar(nbl + 48);
	else
	{
		ft_putnbr(nbl / 10);
		ft_putchar((nbl % 10) + 48);
	}
}
