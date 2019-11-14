/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:52:01 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 13:16:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char *ex_hun(char *number)
{
	if (number[0] > 0  && ft_strlen(number) == 3)
	{
		number[1] = 0;
		parse_line(find_line(number[1], DICT), DICT);
	}
	else
	{
		number = &number[1];
		return (number);
	}
}

char *ex_dec(char*number)
{
	char save;

	if (number[0] = 1 && ft_strlen(number) == 2)
	{
		parse_line(find_line(number[1], DICT), DICT);
		return (number);
	else if (number[0] > 1 && ft_strlen(number) == 2)
	{
		save = number[1];
		number[1] = '0';
		parse_line(find_line(number[1], DICT), DICT);
	}
	else
	{
		number = &number[1];
		return (number);
	}
}

char *ex_uni(char *number)
{
		parse_line(find_line(number[0], DICT), DICT);
		return ("OK");
}
