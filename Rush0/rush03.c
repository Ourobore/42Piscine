/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdruez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:39:49 by bdruez            #+#    #+#             */
/*   Updated: 2019/08/31 19:53:03 by bdruez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	print_top(int x)
{
	int i;

	i = 0;
	if (x < 0)
	{
		ft_putchar('C');
		while (i-- > x + 2)
		{
			ft_putchar('B');
		}
		if (i == x + 1)
			ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		while (i++ < x - 2)
		{
			ft_putchar('B');
		}
		if (i == x - 1)
			ft_putchar('C');
	}
	if (x != 0)
		ft_putchar('\n');
}

void	print_bot(int x)
{
	int i;

	i = 0;
	if (x < 0)
	{
		ft_putchar('C');
		while (i-- > x + 2)
		{
			ft_putchar('B');
		}
		if (i == x + 1)
			ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		while (i++ < x - 2)
		{
			ft_putchar('B');
		}
		if (i == x - 1)
			ft_putchar('C');
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
		print_bot(x);
		while (counter > y + 2)
		{
			print_middle(x);
			counter--;
		}
		if (y < -1)
			print_top(x);
	}
	else if (y > 0)
	{
		print_top(x);
		while (counter < y - 2)
		{
			print_middle(x);
			counter++;
		}
		if (y > 1)
			print_bot(x);
	}
}
