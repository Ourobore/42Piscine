/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_needed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:50:24 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:11:20 by ayuroyet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_putstr(char *str)
{
	long int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

long int	lil_atoi(char *str)
{
	long int i;
	long int nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb);
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(char *str, long int end, long int size)
{
	char			*pt_cpy;
	long int		i;
	long int		start;

	start = end - size;
	pt_cpy = malloc(sizeof(char) * (size + 1));
	if (pt_cpy == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		pt_cpy[i] = str[start];
		i++;
		start++;
	}
	pt_cpy[i] = 0;
	return (pt_cpy);
}
