/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 21:03:27 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/02 15:47:23 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str > 0)
	{
		if (*str >= 32 && *str < 127)
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
