/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:43:17 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 20:50:30 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		iscorrect7(char **tab, int ijhl[4], int i, int j)
{
	if (j == 0)
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if (j == ijhl[3] - 1)
	{
		if (tab[i][j] != 'C')
			return (0);
	}
	else if (tab[i][j] != 'B')
		return (0);
	return (1);
}

int		redirection(char **tab, int ijhl[4], int colle)
{
	int i;
	int j;

	i = ijhl[0];
	j = ijhl[1];
	if (colle == 0 && iscorrect0(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 1 && iscorrect1(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 2 && iscorrect2(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 3 && iscorrect3(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 4 && iscorrect4(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 6 && iscorrect6(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 7 && iscorrect7(tab, ijhl, i, j) == 0)
		return (0);
	if (colle == 10)
		return (0);
	return (1);
}

int		nestedwhile(char **tab, int hei, int len, int colle)
{
	int ijhl[4];

	ijhl[0] = 0;
	ijhl[1] = 0;
	ijhl[2] = hei;
	ijhl[3] = len;
	while (ijhl[0] < ijhl[2])
	{
		while (ijhl[1] < ijhl[3])
		{
			if (redirection(tab, ijhl, colle) == 0)
				return (10);
			ijhl[1]++;
		}
		ijhl[1] = 0;
		ijhl[0]++;
	}
	return (colle);
}

int		whichcolle_svl_l_svl_c(char **tab, int hei, int len)
{
	if (tab[0][len - 1] == 'A')
		return (2);
	else if (tab[0][len - 1] == 'C')
	{
		if (tab[hei - 1][0] == 'A')
			return (3);
		else if (tab[hei - 1][0] == 'C')
			return (4);
		return (10);
	}
	return (10);
}

int		whichcolle_1_l_svl_c(char **tab, int hei, int len)
{
	if (tab[0][len - 1] == 'A')
		return (2);
	else if (tab[0][len - 1] == 'C')
		return (7);
	return (10);
}
