/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:11:42 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/19 18:51:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**pt_swap(char **tab, int i)
{
	char *swap;

	swap = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = swap;
	return (tab);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (tab[l])
		l++;
	while (i < l - 1)
	{
		while (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			pt_swap(tab, i);
			i = 1;
		}
		i++;
	}
}
