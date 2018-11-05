/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:07 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:15:16 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = check_up(str[i]);
		if (n != 1)
			return (0);
		i++;
	}
	return (1);
}
