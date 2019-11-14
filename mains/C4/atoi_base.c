/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:48:47 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 14:14:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	char b [] = "poneyvif";
	char str[] = "   \t--+-i";
	printf("%d\n", ft_atoi_base(str, b));
}
