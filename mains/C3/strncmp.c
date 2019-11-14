/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 07:31:01 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 17:08:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char a[] = "aaaaaaab";
	char b[] = "";
	char x[] = "aaaaaaab";
	char y[] = "";
	int n;

	n = 0;
	printf("%d\n", ft_strncmp(a, b, n));
	printf("%d\n", strncmp(x, y, n));
}
