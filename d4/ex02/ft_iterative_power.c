/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:49:32 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/03 11:49:36 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = nb;
	i = 1;
	while (i++ < power)
		res = res * nb;
	return (res);
}
