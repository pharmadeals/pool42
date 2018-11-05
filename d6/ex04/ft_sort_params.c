/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:56:00 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/14 20:16:59 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		main(int ac, char *av[])
{
	int		i;
	int		n;
	char	*swap;

	i = 1;
	n = 0;
	while (ac - 1 > i)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			swap = av[i];
			av[i] = av[i + 1];
			av[i + 1] = swap;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (ac > i)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
