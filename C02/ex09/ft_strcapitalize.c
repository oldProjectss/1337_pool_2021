/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:46:22 by icourr            #+#    #+#             */
/*   Updated: 2021/06/27 16:20:38 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
		{
			str[i] = str[i] + 32;
			i++;
		}
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
