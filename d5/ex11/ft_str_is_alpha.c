/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:06:44 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:14:23 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cheeck_charac(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n = cheeck_charac(str[i]);
		if (n != 1)
			return (0);
		i++;
	}
	return (1);
}
