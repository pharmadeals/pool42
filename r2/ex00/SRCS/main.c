/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselier <aselier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:30:34 by aselier           #+#    #+#             */
/*   Updated: 2018/08/19 22:08:12 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(void)
{
	char	*buf;
	int		size;
	int		i;

	size = 0;
	buf = malloc(size * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(0, buf + size, 1))
	{
		size++;
		buf = re_alloc(buf, size + 2);
	}
	buf[size] = '\0';
	if (size < 0)
		return (0);
	i = rush02(buf);
	if (i == 0)
		ft_putstr("aucune\n");
	else
		ft_putchar('\n');
	return (0);
}
