/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:33:46 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/01 10:22:03 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55 || b != 56 || c != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0 + 47;
	b = 0 + 47;
	c = 0 + 47;
	while (a++ < 7 + 48)
	{
		while (b++ < 8 + 48)
		{
			while (c++ < 9 + 48)
			{
				if (a != b && a != c && b != c)
					ft_print(a, b, c);
			}
			c = b;
		}
		b = a;
	}
}
