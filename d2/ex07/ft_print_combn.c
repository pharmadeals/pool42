/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:23:27 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/01 13:01:01 by flcarre          ###   ########.fr       */
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

void	ft_print(int a, int n)
{
	if (a < n)
	{
		while (n-- > 1)
			ft_putnbr(0);
	}
	ft_putnbr(a);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int a;
	int i;
	int t[i];

	n = 0;
	if (n == 1)
		ft_putnbr(01234567);
	ft_print(a, n);
}
