/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:00:42 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/03 13:11:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	excep_del(char c)
{
	if (c == 127)
	{
		write(1, "\\7f", 3);
	}
}

char	conv_hexa2(char conversion)
{
	if (conversion == 10)
		conversion = 'a';
	else if (conversion == 11)
		conversion = 'b';
	else if (conversion == 12)
		conversion = 'c';
	else if (conversion == 13)
		conversion = 'd';
	else if (conversion == 14)
		conversion = 'e';
	else if (conversion == 15)
		conversion = 'f';
	return (conversion);
}

void	conv_hexa(char str)
{
	char conversion;

	if (str < 16)
	{
		write(1, "0", 1);
		conversion = str;
	}
	else
	{
		write(1, "1", 1);
		conversion = str - 16;
	}
	conversion = conv_hexa2(conversion);
	if (conversion < 10)
		write(1, &conversion + 48, 1);
	else
		write(1, &conversion, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		excep_del(str[i]);
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			conv_hexa(str[i]);
		}
		else if (str[i] < 0)
		{
			c = str[i];
			conv_hexa(c);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
