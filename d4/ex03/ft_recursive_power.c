/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:49:54 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/03 11:49:57 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = nb;
	if (power > 1)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
