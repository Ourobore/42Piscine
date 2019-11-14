/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:53:42 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/03 12:05:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main()
{
	char a[] = "Coucou\tu vas bien ?";

	ft_putstr_non_printable(a);
}
