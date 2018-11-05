/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 15:22:38 by pichen            #+#    #+#             */
/*   Updated: 2018/08/12 15:56:14 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "affichage.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	print(int **tab)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < 9)
	{
		while (n < 9)
		{
			ft_putnbr(tab[i][n++]);
			if (n < 9)
				ft_putchar(' ');
		}
		i++;
		n = 0;
		ft_putchar('\n');
	}
}
