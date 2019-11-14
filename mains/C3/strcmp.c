/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 07:21:02 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 07:27:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char a[] = "aa";
	char b[] = "ab";
	char x[] = "aa";
	char y[] = "ab";


	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(x, y));
}
