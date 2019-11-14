/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 07:15:08 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 07:41:57 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char a[] = "a";
	char b[] = "def";
	char x[] = "a";
	char y[] = "def";

	printf("%s\n", ft_strcat(a, b));
	printf("%s\n", strcat(x, y));
}
