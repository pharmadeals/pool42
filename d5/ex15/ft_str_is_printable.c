/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:23 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:20:44 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_p(char c)
{
	if (c >= '!' && c <= '~')
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = check_p(str[i]);
		if (n != 1)
			return (0);
		i++;
	}
	return (1);
}
