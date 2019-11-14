/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:40:18 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:19:47 by ayuroyet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*get_string(void)
{
	char		*str;
	char		c;
	long int	fd;
	long int	i;

	str = NULL;
	fd = open("tgrille", O_RDONLY);
	if (fd == -1)
		return (NULL);
	i = 0;
	while (read(fd, &c, 1) > 0)
		i++;
	close(fd);
	if (!(str = (malloc((sizeof(char) * i + 1)))))
		return (NULL);
	i = 0;
	fd = open("tgrille", O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &c, 1))
		str[i++] = c;
	str[i] = 0;
	close(fd);
	return (str);
}

params	get_params(char *str)
{
	long int	i;
	long int	fin;
	params		extract;

	fin = 0;
	while (str[fin] != '\n')
		fin++;
	extract.empty = str[fin - 3];
	extract.obstacle = str[fin - 2];
	extract.solution = str[fin - 1];
	extract.nb_lines = lil_atoi(str);
	fin++;
	i = fin;
	while (str[i] != '\n')
		i++;
	extract.longueur = i - fin;
	return (extract);
}

char	**get_square(void)
{
	char		**tab;
	char		*str;
	long int	a;
	long int	i;
	long int	j;

	str = NULL;
	tab = NULL;
	i = 0;
	if (!(tab = malloc(sizeof(*tab) * (i + 1))))
		return (NULL);
	str = get_string();
	j = 0;
	a = 0;
	while (str[i] != '\n')
		i++;
	str = &str[i + 1];
	i = 0;
	while (str[i])
	{
		while (str[i] != '\n' && str[i])
		{
			i++;
			j++;
		}
		if (str[i] == '\n')
		{
			tab[a] = ft_strdup(str, i, j);
			a++;
			j = 0;
		}
		i++;
	}
	tab[a] = 0;
	return (tab);
}
