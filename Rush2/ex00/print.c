/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 10:58:43 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 21:21:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strdup(char *str)
{
	char	*pt_cpy;
	int		i;

	pt_cpy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (pt_cpy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		*(pt_cpy + i) = *(str + i);
		i++;
	}
	*(pt_cpy + i) = 0;
	return (pt_cpy);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
