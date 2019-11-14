/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 07:24:54 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 17:59:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort_c;
	int sort_d;

	i = 0;
	sort_c = -1;
	sort_d = 1;
	if (length == 0)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			sort_c += f(tab[i], tab[i + 1]);
		if (f(tab[i], tab[i + 1]) >= 0)
			sort_d += f(tab[i], tab[i + 1]);
		i++;
	}
	if ((sort_c <= 0 && sort_d == 1) || (sort_d >= 0 && sort_c == -1))
		return (1);
	else
		return (0);
}
