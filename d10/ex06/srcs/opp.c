/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:07:46 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/21 16:20:14 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_add(char **tab)
{
	ft_putnbr(ft_atoi(tab[1]) + ft_atoi(tab[3]));
	ft_putchar('\n');
}

void	ft_less(char **tab)
{
	ft_putnbr(ft_atoi(tab[1]) - ft_atoi(tab[3]));
	ft_putchar('\n');
}

void	ft_mult(char **tab)
{
	ft_putnbr(ft_atoi(tab[1]) * ft_atoi(tab[3]));
	ft_putchar('\n');
}

void	ft_div(char **tab)
{
	if (ft_atoi(tab[3]) == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(ft_atoi(tab[1]) / ft_atoi(tab[3]));
		ft_putchar('\n');
	}
}

void	ft_mod(char **tab)
{
	if (ft_atoi(tab[3]) == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(ft_atoi(tab[1]) % ft_atoi(tab[3]));
		ft_putchar('\n');
	}
}
