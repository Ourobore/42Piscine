/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:52:27 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 14:05:56 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char a[] = "zazabu";
	char b[] = "ab";
	char x[] = "zazabu";
	char y[] = "ab";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(x, y));
}
