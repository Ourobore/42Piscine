/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:20:27 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 18:53:41 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**pt_swap(char **tab, int i)
{
	char *swap;

	swap = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = swap;
	return (tab);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*))
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (tab[l])
		l++;
	while (i < l - 1)
	{
		while ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			pt_swap(tab, i);
			i = 1;
		}
		i++;
	}
}
