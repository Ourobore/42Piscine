/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:14:20 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/03 14:10:36 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "abcd";
	char src[] = "xyz";
	int size;

	size = 5;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%lu\n", strlcpy(dest, src, size));
}
