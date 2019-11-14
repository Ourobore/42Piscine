/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:39:35 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 15:12:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		typev(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 65 && c <= 90)
		return (3);
	else
		return (4);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (typev(str[i - 1]) == 4 && typev(str[i]) == 2)
		{
			str[i] -= 32;
		}
		else if (typev(str[i - 1]) != 4 && typev(str[i]) == 3)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
