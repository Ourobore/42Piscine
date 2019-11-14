/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 06:51:05 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/11 18:12:44 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
