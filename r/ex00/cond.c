/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:17:44 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 18:43:01 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "affichage.h"
#include "cond.h"

int	check_ligne(int t, int **grille, int l, int c)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[l][i] == t && i != c)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int t, int **grille, int c, int l)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][c] == t && i != l)
			return (0);
		i++;
	}
	return (1);
}

int	check_sqr(int k, int **grille, int c, int l)
{
	int i;
	int j;
	int x;
	int y;

	x = 0;
	i = c - (c % 3);
	j = l - (l % 3);
	while (x < 3)
	{
		y = 0;
		i = c - (c % 3);
		while (y < 3)
		{
			if (k == grille[j][i] && j != l && i != c)
				return (0);
			i++;
			y++;
		}
		j++;
		x++;
	}
	return (1);
}

int	check_grille(int **grille)
{
	int bol;
	int k;
	int i;
	int j;

	bol = 1;
	k = 0;
	while (k < 81 && bol)
	{
		i = k / 9;
		j = k % 9;
		if (grille[i][j] < 0 || grille[i][j] > 9)
			bol = 0;
		else if (grille[i][j] != 0 && !check_ligne(grille[i][j], grille, i, j))
			bol = 0;
		else if (grille[i][j] != 0 && !check_col(grille[i][j], grille, j, i))
			bol = 0;
		else if (grille[i][j] != 0 && !check_sqr(grille[i][j], grille, j, i))
		{
			bol = 0;
		}
		k++;
	}
	return (bol);
}

int	check_taille(int argc, char **argv)
{
	int i;

	i = argc;
	if (i != 10)
		return (0);
	i--;
	while (i > 0)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i--;
	}
	return (1);
}
