/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:18:20 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/01 13:05:30 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_print(int a, int b)
{
	if (a < 10)
		ft_putnbr(0);
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
		ft_putnbr(0);
	ft_putnbr(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	b = 0;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
			ft_print(a, b);
	}
}
