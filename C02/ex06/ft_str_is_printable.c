/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:41:39 by icourr            #+#    #+#             */
/*   Updated: 2021/06/27 15:20:45 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 127)
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
		return (1);
	}
}
