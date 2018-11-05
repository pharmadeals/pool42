/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 18:15:16 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/23 21:34:45 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if2(int *tab, int length, int (*f)(int, int))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_if1(int *tab, int length, int (*f)(int, int))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_count_if1(tab, length, f) || ft_count_if2(tab, length, f));
}
