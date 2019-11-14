/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:56:37 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 21:46:31 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int n;

	argc++;
	n = find_line(argv[1], cpy_s());
	if (n == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	else
		parse_line(n, cpy_s());
}
