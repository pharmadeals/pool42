/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:06:54 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:14:38 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = check_num(str[i]);
		if (n != 1)
			return (0);
		i++;
	}
	return (1);
}
