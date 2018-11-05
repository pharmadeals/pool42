/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:14 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:19:50 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = check_low(str[i]);
		if (n != 1)
			return (0);
		i++;
	}
	return (1);
}
