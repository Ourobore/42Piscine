/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:55:44 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:28:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

params	init_p(void)
{
	params p;

	p.nb_lines = get_params(get_string()).nb_lines;
	p.longueur = get_params(get_string()).longueur;
	p.empty = get_params(get_string()).empty;
	p.obstacle = get_params(get_string()).obstacle;
	p.solution = get_params(get_string()).solution;
	return (p);
}

int		is_valid(char *str, char **tab, params p)
{
	if (check_exists(str, p) == 1 && check_carr_return(str, p) == 1 &&
			check_line_len(tab) == 1 && is_double_char(p) == 1 &&
			is_printable(str, p) == 1)
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	*str;
	char	**t;
	int		**n;
	params	p;

	t = NULL;
	n = NULL;
	str = get_string();
	t = get_square();
	p = init_p();
	if (is_valid(str, t, p) == 1)
		return (0);
	else
	{
		t = conv_symbols(get_square(), p.empty, p.obstacle);
		n = char_to_int(t);
		free(t);
		n = resolve(n);
		affich_result(get_square(), get_coords(n, p.nb_lines, p.longueur), p);
		free(n);
		free(str);
	}
}
