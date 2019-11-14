/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:11:05 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 20:08:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		same_str(char *dict, char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != dict[i])
			return (0);
		i++;
	}
	return (1);
}

int		find_line(char *arg, char *dict)
{
	int i;

	i = 0;
	if (same_str(dict, arg) == 1)
		return (i);
	while (dict[i])
	{
		if (same_str(dict + i, arg) == 1 && dict[i - 1] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		find_char(char c, char *dict)
{
	int i;

	i = 0;
	while (dict[i] != 0)
	{
		if (dict[i] == c && dict[i - 1] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		only_spaces(int c_count, char *dict)
{
	int retour;

	retour = 1;
	while (dict[c_count] != '\n')
	{
		if (dict[c_count] != 32)
			retour = 0;
		c_count++;
	}
	return (retour);
}

char	*parse_line(int c_count, char *dict)
{
	char	*chaine;
	int		pos;

	chaine = NULL;
	while (dict[c_count] != ':')
		c_count++;
	c_count++;
	while (dict[c_count] == 32)
		c_count++;
	pos = c_count;
	while (dict[c_count] != '\n' && dict[c_count] > 31 &&
				dict[c_count] < 127 && only_spaces(c_count, dict) != 1)
		c_count++;
	chaine = malloc(sizeof(char) * ((c_count - pos) + 1));
	c_count = pos;
	pos = 0;
	while (dict[c_count] != '\n' && dict[c_count] > 31 &&
				dict[c_count] < 127 && only_spaces(c_count, dict) != 1)
	{
		chaine[pos] = dict[c_count];
		pos++;
		c_count++;
	}
	chaine[pos] = 0;
	ft_putstr(chaine);
	return (chaine);
}
