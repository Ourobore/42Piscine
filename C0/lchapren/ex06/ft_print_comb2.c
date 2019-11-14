/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 07:38:47 by lchapren          #+#    #+#             */
/*   Updated: 2019/08/29 12:22:05 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int i)
{
	ft_putchar((i / 10) + 48);
	ft_putchar((i % 10) + 48);
}

void	print_sequence(int a, int b)
{
	print_number(a);
	write(1, " ", 1);
	print_number(b);
	if ((a != 98) || (b != 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_sequence(a, b);
			b++;
		}
		a++;
	}
}
