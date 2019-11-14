/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 07:06:22 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 08:34:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{
	char base[] = "poneyvif";
	int i;
	int nbr;

	i = 0;
	nbr = 8;
	ft_putnbr_base(nbr, base);
}
