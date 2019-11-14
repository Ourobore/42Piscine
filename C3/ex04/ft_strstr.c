/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:20:34 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 17:42:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		search(char *str, char *to_find, unsigned int pos)
{
	int a;
	int b;

	a = pos;
	b = 0;
	while (str[a] && to_find[b])
	{
		if (str[a] - to_find[b] != 0)
			return (-1);
		a++;
		b++;
	}
	if (str[a] - to_find[b] >= 0)
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	first;

	i = 0;
	first = to_find[0];
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == first)
		{
			if (search(str, to_find, i) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
