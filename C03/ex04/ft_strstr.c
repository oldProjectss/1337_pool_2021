/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:10:03 by icourr            #+#    #+#             */
/*   Updated: 2021/07/01 16:29:34 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (to_find[i] != '\0')
		{
			if (str[i] == to_find[i])
				i++;
			else
				break ;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
		i = 0;
	}
	return (0);
}
