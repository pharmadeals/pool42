/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:19:29 by flcarre           #+#    #+#             */
/*   Updated: 2018/07/31 16:19:32 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int x;
	
	if (nb < 0)
	{
		ft_putchar('-');
		x = nb * -1;
	}
	else
		x = nb;
	if (x < 10)
		ft_putchar(x + 48);
	else
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
}
