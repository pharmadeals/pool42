/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:43:09 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/17 10:43:18 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		size_wd(char *str, int i)
{
	int n;

	n = 0;
	while (str[i] != '\0' && check_space(str[i]))
		i++;
	while (str[i + n] != '\0' && !check_space(str[i + n]))
		n++;
	return (n);
}

int		word_count(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (!check_space(str[i])
		&& (check_space(str[i - 1]) || str[i - 1] == 0))
		{
			n++;
		}
		i++;
	}
	return (n + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int			i;
	int			j;
	int			n;
	char		**tab;

	i = 0;
	j = 0;
	n = 0;
	tab = malloc(word_count(str) * sizeof(char*));
	while (n < ft_strlen(str))
	{
		while (check_space(str[n]))
			n++;
		tab[i] = malloc((size_wd(str, n)) * sizeof(char));
		while (!check_space(str[n]) && str[n])
			tab[i][j++] = str[n++];
		if (tab[i][0] != 0 && tab[i][0] != 1)
		{
			tab[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	tab[i] = 0;
	return (tab);
}
