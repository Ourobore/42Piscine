/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayuroyet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:47:25 by ayuroyet          #+#    #+#             */
/*   Updated: 2019/08/31 18:32:40 by ayuroyet         ###   ########.fr       */
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
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	if (x != 0)
		ft_putchar('\n');
}

void	print_o(int x)
{
	int i;

	i = 1;
	if (x < 0)
		x = -x;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
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
		print_o(x);
		while (counter > y + 2)
		{
			print_middle(x);
			counter--;
		}
		if (y < -1)
			print_o(x);
	}
	else if (y > 0)
	{
		print_o(x);
		while (counter < y - 2)
		{
			print_middle(x);
			counter++;
		}
		if (y > 1)
			print_o(x);
	}
}
