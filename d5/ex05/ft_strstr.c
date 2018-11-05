/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:04:20 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/07 16:04:21 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == to_find[n])
		{
			while (str[i + n] == to_find[n] && to_find[n] != '\0')
			{
				if (to_find[n + 1] == '\0')
					return (str + i);
				n++;
			}
		}
		n = 0;
		i++;
	}
	return (0);
}
