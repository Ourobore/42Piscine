/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:15:35 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/05 12:54:19 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is(char str)
{
	if (str == ' ' || str == '\t' ||
			str == '\n' || str == '\v' || str == '\f' ||
			str == '\r')
		return (1);
	else if (str >= 48 && str <= 57)
		return (2);
	else
		return (3);
}

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int nb;

	nb = 0;
	i = 0;
	signe = 1;
	while (is(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (signe * nb);
}
