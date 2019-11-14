/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:16:38 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/04 09:33:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int longueur;

	i = 0;
	j = 0;
	longueur = length(dest) + length(src);
	if (size == 0)
		return (length(src));
	if (size < length(dest))
		return (length(src) + size);
	while (dest[i] && i < size)
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (longueur);
}
