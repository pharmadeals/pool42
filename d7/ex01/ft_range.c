/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:39:06 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/17 10:44:50 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *i;
	int n;

	n = 0;
	if (min >= max)
		return (0);
	i = malloc(((max - min) - 1) * sizeof(int));
	while (min < max)
	{
		i[n] = min;
		n++;
		min++;
	}
	return (i);
}
