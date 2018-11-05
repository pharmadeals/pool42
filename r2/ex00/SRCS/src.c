/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:42:23 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 20:47:59 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_y(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n);
}

int		rightsize(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen2(str);
	while (str[i])
	{
		if (i % (len + 1) == 0 && str[i] == '\n')
		{
			return (0);
		}
		if (i % (len + 1) < len)
		{
			if (str[i] == '\n' || str[i] == '\0' || str[i + 1] == '\0')
			{
				return (0);
			}
		}
		if (i % (len + 1) == len && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int		iscorrect0(char **tab, int ijhl[4], int i, int j)
{
	if ((i == 0 || i == ijhl[2] - 1) && (j == 0 || j == ijhl[3] - 1))
	{
		if (tab[i][j] != 'o')
			return (0);
	}
	else if (i != 0 && i != ijhl[2] - 1 && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != ' ')
			return (0);
	}
	else if ((i == 0 || i == ijhl[2] - 1) && j != 0 && j != ijhl[3] - 1)
	{
		if (tab[i][j] != '-')
			return (0);
	}
	else if (tab[i][j] != '|')
		return (0);
	return (1);
}
