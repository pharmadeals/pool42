/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:40:07 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/14 17:41:21 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		n;
	int		r;
	char	*ret;

	i = 0;
	n = 0;
	r = 0;
	while (i < argc - 1)
		n = n + ft_strlen(argv[i++]);
	ret = malloc(n * sizeof(char));
	i = 1;
	n = 0;
	while (i < argc)
	{
		n = 0;
		while (argv[i][n] != '\0')
			ret[r++] = argv[i][n++];
		i++;
		if (i < argc)
			ret[r++] = '\n';
	}
	ret[r] = '\0';
	return (ret);
}
