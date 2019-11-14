/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:52:43 by lchapren          #+#    #+#             */
/*   Updated: 2019/08/31 16:42:04 by bdruez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_middle(int x)
{
	int i;

	i = 1;
	if (x < 0)
		x = -x;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	if (x != 0)
		ft_putchar('\n');
}

void	print_a(int x)
{
	int i;

	i = 1;
	if (x < 0)
		x = -x;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
	if (x != 0)
		ft_putchar('\n');
}

void	print_c(int x)
{
	int i;

	i = 1;
	if (x < 0)
		x = -x;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	if (x != 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int counter;

	counter = 0;
	if (y < 0)
	{
		print_c(x);
		while (counter > y + 2)
		{
			print_middle(x);
			counter--;
		}
		if (y < -1)
			print_a(x);
	}
	else if (y > 0)
	{
		print_a(x);
		while (counter < y - 2)
		{
			print_middle(x);
			counter++;
		}
		if (y > 1)
			print_c(x);
	}
}
