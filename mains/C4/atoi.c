/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:12:44 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 12:54:23 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);
int transform (char *str, int *i);

int main()
{
	char str[] = "  \n+-+8965";
	printf("%d\n", ft_atoi(str));
}
