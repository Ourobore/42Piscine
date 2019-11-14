/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:07:22 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/14 11:46:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	int nb_car;

	i = 0;
	nb_car = 0;
	while (str[i])
	{
		nb_car++;
		i++;
	}
	return (nb_car);
}