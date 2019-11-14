/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:56:37 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/02 14:52:54 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str > 0)
	{
		if (*str >= 65 && *str <= 90)
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
