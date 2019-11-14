/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:17:46 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/09 10:15:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int i;
	unsigned int a;
	unsigned int b;

	if (nb >= 0)
	{
		i = 1;
		a = 1;
		b = nb;
		while (i <= b)
		{
			a = a * i;
			i++;
		}
		return (a);
	}
	else
		return (0);
}
