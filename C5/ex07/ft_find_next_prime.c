/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 07:28:32 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/09 20:40:19 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (i < (nb / i) + 1)
	{
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}
