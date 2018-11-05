/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:18:51 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/19 22:08:22 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*re_alloc(char *str, int n)
{
	int		i;
	char	tmp[ft_strlen(str)];

	i = 0;
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	str = malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (tmp[i])
	{
		str[i] = tmp[i];
		i++;
	}
	return (str);
}
