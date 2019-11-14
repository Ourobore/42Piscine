/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:10:44 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 08:39:18 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
