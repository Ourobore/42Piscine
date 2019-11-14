/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:04:12 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/02 14:51:27 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str > 0)
	{
		if (*str >= 97 && *str <= 122)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
