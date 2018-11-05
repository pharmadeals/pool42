/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:43:39 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 21:35:56 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		whichcolle(char **tab, int hei, int len)
{
	if (tab[0][0] == 'o')
		return (0);
	if (tab[0][0] == '/')
		return (1);
	if (tab[0][0] == 'A')
	{
		if (len == 1 && hei == 1)
			return (9);
		else
		{
			if (len > 1)
			{
				if (hei > 1)
					return (whichcolle_svl_l_svl_c(tab, hei, len));
				else
					return (whichcolle_1_l_svl_c(tab, hei, len));
			}
			else
				return (whichcolle_svl_l_1_c(tab, hei, len));
		}
	}
	return (10);
}

void	filltab(char *str, char **tab)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = ft_strlen2(str);
	while (i < ft_y(str))
	{
		while (j < l)
		{
			tab[i][j] = str[i * (l + 1) + j];
			j++;
		}
		j = 0;
		i++;
	}
}

int		n_rush(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (rightsize(str) == 0)
		return (10);
	l = ft_strlen2(str);
	tab = malloc(ft_y(str) * sizeof(char*));
	if (tab == NULL)
		return (0);
	while (i < ft_y(str))
	{
		tab[i] = malloc(ft_strlen2(str) * sizeof(char));
		if (tab[i] == NULL)
			return (0);
		i++;
	}
	i = 0;
	filltab(str, tab);
	return (nestedwhile(tab, ft_y(str), l, whichcolle(tab, ft_y(str), l)));
}

void	print(int i, int x, int y)
{
	ft_putstr("[colle-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		rush02(char *str)
{
	int n;

	n = n_rush(str);
	if (n == 10)
		return (0);
	if (n == 6 || n == 9)
	{
		print(2, ft_strlen2(str), ft_y(str));
		ft_putstr(" || ");
	}
	if (n == 7 || n == 9)
	{
		print(3, ft_strlen2(str), ft_y(str));
		ft_putstr(" || ");
	}
	if (n == 6 || n == 7 || n == 9)
		print(4, ft_strlen2(str), ft_y(str));
	else
		print(n, ft_strlen2(str), ft_y(str));
	return (1);
}
