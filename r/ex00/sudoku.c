/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:42:11 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 16:04:16 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	**conv(char **tab)
{
	int i;
	int n;
	int **ret;

	i = 1;
	ret = malloc(9 * sizeof(int *));
	while (tab[i])
	{
		ret[i - 1] = malloc(9 * sizeof(int));
		n = 0;
		while (tab[i][n])
		{
			if (tab[i][n] == '.')
				ret[i - 1][n] = 0;
			else
				ret[i - 1][n] = tab[i][n] - 48;
			n++;
		}
		i++;
	}
	return (ret);
}

int	remplace(int **grille, int position)
{
	int i[2];
	int k;

	if (position == 9 * 9)
		return (1);
	i[0] = position / 9;
	i[1] = position % 9;
	if (grille[i[0]][i[1]] != 0)
	{
		return (remplace(grille, position + 1));
	}
	k = 1;
	while (k <= 9)
	{
		if (check_ligne(k, grille, i[0], i[1])
		&& check_col(k, grille, i[1], i[0]) && check_sqr(k, grille, i[1], i[0]))
		{
			grille[i[0]][i[1]] = k;
			if (remplace(grille, position + 1))
				return (1);
		}
		k++;
	}
	grille[i[0]][i[1]] = 0;
	return (0);
}

int	remplace2(int **grille, int position)
{
	int i[2];
	int k;

	if (position == -1)
		return (1);
	i[0] = position / 9;
	i[1] = position % 9;
	if (grille[i[0]][i[1]] != 0)
	{
		return (remplace2(grille, position - 1));
	}
	k = 9;
	while (k >= 1)
	{
		if (check_ligne(k, grille, i[0], i[1])
		&& check_col(k, grille, i[1], i[0]) && check_sqr(k, grille, i[1], i[0]))
		{
			grille[i[0]][i[1]] = k;
			if (remplace2(grille, position - 1))
				return (1);
		}
		k--;
	}
	grille[i[0]][i[1]] = 0;
	return (0);
}

int	egal(int **tab, int **tab2)
{
	int i;
	int j;
	int bol;

	bol = 1;
	i = 0;
	while (tab[i] && bol)
	{
		j = 0;
		while (tab[i][j] && bol)
		{
			if (tab[i][j] != tab2[i][j])
				bol = 0;
			j++;
		}
		i++;
	}
	return (bol);
}
