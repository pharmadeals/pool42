/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:52:55 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/03 11:52:56 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 0;
	while (i++ <= nb / 2)
	{
		if (nb % i == 0 && i != 1 && i != nb)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0 || nb == 1)
		return (2);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
