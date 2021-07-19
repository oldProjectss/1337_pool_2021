/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:01:46 by icourr            #+#    #+#             */
/*   Updated: 2021/07/04 12:05:46 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaceCount(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		 i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	y;
	int	result;

	i = spaceCount(str);
	y = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			y++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
		if (y % 2 != 0)
			result = res * -1;
		else
			result = res;
	}
	return (result);
}
