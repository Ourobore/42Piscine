/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:21:04 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 09:28:37 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char a[10] = "abcd";
	char b[] = "xyz";
	unsigned int size;
	unsigned int y;
	unsigned int z;
	char o[10] = "abcd";
	char p[] = "xyz";

	size = 5;
	y = ft_strlcat(a, b, size);
	z = strlcat(o, p, size);
	printf("%d\n", y);
	printf("%d\n", z);
}
