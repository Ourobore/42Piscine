/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:42:29 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:12 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*cpy_s(void)
{
	int		fd;
	char	c;
	char	*chaine;
	int		ligne;

	ligne = 0;
	fd = open(DICT, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &c, 1) != 0)
		ligne++;
	close(fd);
	chaine = malloc(sizeof(char) * (ligne + 1));
	fd = open(DICT, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ligne = 0;
	while (read(fd, &c, 1) != 0)
	{
		chaine[ligne] = c;
		ligne++;
	}
	chaine[ligne] = 0;
	close(fd);
	return (chaine);
}
