/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:43:00 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 20:48:03 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		iscorrect1(char **tab, int ijhl[4], int i, int j)
{
	if (i == 0 && j == 0)
	{
		if (tab[i][j] != '/')
			return (0);
	}
	else if ((i == 0 && j == ijhl[3] - 1) || (i == ijhl[2] - 1 && j == 0))
	{
		if (tab[i][j] != '\\')
		{
			return (0);
		}
	}
	else if (i == ijhl[2] - 1 && j == ijhl[3] - 1)
	{
		if (tab[i][j] != '/')
			return (0);
	}
	else if (i != 0 && i != ijhl[2] - 1 && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != ' ')
			return (0);
	}
	else if (tab[i][j] != '*')
		return (0);
	return (1);
}

int		iscorrect2(char **tab, int ijhl[4], int i, int j)
{
	if (i == 0 && (j == 0 || j == ijhl[3] - 1))
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if (i == ijhl[2] - 1 && (j == 0 || j == ijhl[3] - 1))
	{
		if (tab[i][j] != 'C')
			return (0);
	}
	else if (i != 0 && i != ijhl[2] - 1 && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != ' ')
			return (0);
	}
	else if (tab[i][j] != 'B')
		return (0);
	return (1);
}

int		iscorrect3(char **tab, int ijhl[4], int i, int j)
{
	if ((i == 0 || i == ijhl[2] - 1) && j == 0)
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if ((i == 0 || i == ijhl[2] - 1) && j == ijhl[3] - 1)
	{
		if (tab[i][j] != 'C')
			return (0);
	}
	else if (i != 0 && i != ijhl[2] - 1 && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != ' ')
			return (0);
	}
	else if (tab[i][j] != 'B')
		return (0);
	return (1);
}

int		iscorrect4(char **tab, int ijhl[4], int i, int j)
{
	if (i == 0 && j == 0)
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if ((i == 0 && j == ijhl[3] - 1) || (i == ijhl[2] - 1 && j == 0))
	{
		if (tab[i][j] != 'C')
			return (0);
	}
	else if (i == ijhl[2] - 1 && j == ijhl[3] - 1)
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if (i != 0 && i != ijhl[2] - 1 && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != ' ')
			return (0);
	}
	else if (tab[i][j] != 'B')
		return (0);
	return (1);
}

int		iscorrect6(char **tab, int ijhl[4], int i, int j)
{
	if (i == 0)
	{
		if (tab[i][j] != 'A')
			return (0);
	}
	else if (i == ijhl[2] - 1)
	{
		if (tab[i][j] != 'C')
			return (0);
	}
	else if (tab[i][j] != 'B')
		return (0);
	return (1);
}
