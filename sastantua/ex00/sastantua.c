/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 13:04:44 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/05 14:22:51 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	door(int y_max, int ligne, int s)
{
	int	i;
	int	pos;
	int	y;

	pos = y_max;
	y = 0;
	i = 0;
	while (y_max-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	while (i++ < (ligne - s) / 2)
		ft_putchar('*');
	while (i >= (ligne - s) / 2 && i <= ((ligne - s) / 2) + s)
	{
		(s > 4 && y == s - 2 && pos == s / 2) ? ft_putchar('$')
		: ft_putchar('|');
		i++;
		y++;
	}
	while (i++ <= ligne)
		ft_putchar('*');
	ft_putchar('\\');
	ft_putchar('\n');
}

int		size_max(int size)
{
	int	i;
	int	y_max;
	int	add;
	int	rep;
	int	red;

	red = 1;
	rep = 1;
	y_max = 0;
	i = 1;
	add = 3;
	if (size == 1)
		return (3);
	while (size >= i)
	{
		if (i % 2 == 1 && i >= 7)
			red += 1;
		if (i > 4 || i == 6)
			rep = rep - red;
		y_max += add;
		add += 2;
		i++;
	}
	return (y_max + rep);
}

void	print(int y_max, int ligne)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = y_max;
	while (y_max > 0)
	{
		ft_putchar(' ');
		y_max--;
	}
	ft_putchar('/');
	while (ligne > 0)
	{
		ft_putchar('*');
		ligne--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		boucle(int stat_size, int y_max, int ligne)
{
	if (stat_size % 2 == 0)
	{
		stat_size--;
		print(y_max, ligne);
	}
	else if (y_max < stat_size)
	{
		(stat_size % 2) ? 0 : stat_size--;
		door(y_max, ligne, stat_size);
	}
	else
		print(y_max, ligne);
	return (stat_size);
}

void	sastantua(int size)
{
	int	norminette[6];

	norminette[0] = 3;
	norminette[1] = 0;
	norminette[2] = size_max(size);
	norminette[3] = 2;
	norminette[4] = 1;
	norminette[5] = size;
	while (size-- >= 1)
	{
		while (norminette[1]++ < norminette[0])
		{
			norminette[2]--;
			norminette[5] = boucle(norminette[5], norminette[2], norminette[4]);
			norminette[4] += 2;
		}
		norminette[2] = norminette[2] - norminette[3];
		norminette[4] = norminette[4] + norminette[3] * 2;
		(norminette[0] % 2) ? 0 : norminette[3]++;
		norminette[1] = 0;
		norminette[0]++;
	}
}
