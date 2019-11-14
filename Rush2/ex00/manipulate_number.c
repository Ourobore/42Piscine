/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 07:05:14 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 21:21:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ex_dec(char *number, char *dict)
{
	char tmp[3];

	if (number[1] == '1')
	{
		tmp[0] = number[1];
		tmp[1] = number[2];
		tmp[2] = 0;
		parse_line(find_line(tmp, dict), dict);
	}
	else if (number[1] > 1)
	{
		tmp[0] = number[1];
		tmp[1] = '0';
		tmp[2] = 0;
		write(1, " ", 1);
		parse_line(find_line(tmp, dict), dict);
	}
}

char	*ft_strcpy(char *src, int n)
{
	int		i;
	int		j;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 3));
	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = '0';
	}
	while (src[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*fixed_nbr(char *number)
{
	if (ft_strlen(number) % 3 == 1)
		return (ft_strcpy(number, 2));
	else if (ft_strlen(number) % 3 == 2)
		return (ft_strcpy(number, 2));
	return (number);
}

void	ex_all(char *number, char *dict)
{
	char *chaine;

	chaine = fixed_nbr(number);
	if (number[0] > '0')
	{
		parse_line(find_char(chaine[0], dict), dict);
		write(1, " ", 1);
		parse_line(find_line("100", dict), dict);
		write(1, " ", 1);
	}
	ex_dec(chaine, dict);
	if (number[1] != '1' && chaine[2] != '0')
	{
		write(1, " ", 1);
		parse_line(find_char(chaine[2], dict), dict);
	}
}
