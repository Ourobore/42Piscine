/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:52:11 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/12 18:18:23 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = NULL;
	cpy = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (cpy == NULL)
		return (cpy);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

struct s_stock_str	*c_size(int ac, char **av, struct s_stock_str *tab_struct)
{
	int i;

	i = 0;
	tab_struct = malloc(sizeof(*tab_struct) * ac + 1);
	while (i < ac)
	{
		tab_struct[i].str = malloc(sizeof(char) * ft_strlen(av[i]));
		tab_struct[i].copy = malloc(sizeof(char) * ft_strlen(av[i]));
		i++;
	}
	tab_struct[i].str = malloc(sizeof(char) * 1);
	tab_struct[i].copy = malloc(sizeof(char) * 1);
	return (tab_struct);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab_struct;

	i = 0;
	tab_struct = NULL;
	tab_struct = c_size(ac, av, tab_struct);
	if (tab_struct == NULL)
		return (tab_struct);
	while (i < ac)
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = ft_strdup(av[i]);
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].size = 0;
	tab_struct[i].str = 0;
	tab_struct[i].copy = 0;
	return (tab_struct);
}
