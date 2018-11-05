/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:05:30 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/23 19:26:28 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		ft_add(argv);
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_less(argv);
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_mult(argv);
	else if (ft_strcmp(argv[2], "/") == 0)
		ft_div(argv);
	else if (ft_strcmp(argv[2], "%") == 0)
		ft_mod(argv);
	else
		ft_putstr("0\n");
	return (0);
}
