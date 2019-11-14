/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 07:42:26 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 07:52:24 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char a[] = "ab";
	char b[] = "efg";
	char x[] = "ab";
	char y[] = "efg";
	int nb;

	nb = 4;
	printf("%s\n", ft_strncat(a, b, nb));
	printf("%s\n", strncat(x, y, nb));
}
