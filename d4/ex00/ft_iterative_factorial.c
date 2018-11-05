/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:48:33 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/03 11:48:44 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	i = 1;
	while (i <= nb)
		res = res * i++;
	return (res);
}
