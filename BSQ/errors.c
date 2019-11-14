/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayuroyet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:08:13 by ayuroyet          #+#    #+#             */
/*   Updated: 2019/09/18 22:42:00 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_exists(char *str, params carac)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (str[i + 1] != carac.empty && str[i + 1] != carac.obstacle)
		return (0);
	return (1);
}

int	check_carr_return(char *str, params verif)
{
	int i;
	int count;

	verif.nb_lines = get_params(str).nb_lines;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	if (count - 1 != verif.nb_lines)
		return (1);
	return (0);
}

int	check_line_len(char **tab)
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (tab[0][len])
		len++;
	while (tab[i])
	{
		if (len != ft_strlen(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_double_char(params carac)
{
	if (carac.obstacle == carac.empty)
		return (1);
	else if (carac.obstacle == carac.solution)
		return (1);
	else if (carac.empty == carac.solution)
		return (1);
	else
		return (0);
}

int	is_printable(char *str, params carac)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (i < 4)
		return (1);
	else if (carac.obstacle < 32 || carac.obstacle > 126)
		return (1);
	else if (carac.empty < 32 || carac.empty > 126)
		return (1);
	else if (carac.solution < 32 || carac.solution > 126)
		return (1);
	return (0);
}
