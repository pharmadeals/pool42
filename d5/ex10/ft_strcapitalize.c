/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:06:35 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:16:42 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_charac(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
	(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && check_charac(str[i - 1]) == 0)
			str[i] -= 'a' - 'A';
		if (str[i] >= 'A' && str[i] <= 'Z' && check_charac(str[i - 1]) == 1)
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
