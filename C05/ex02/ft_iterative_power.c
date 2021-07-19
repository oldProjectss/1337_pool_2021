/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:31:12 by icourr            #+#    #+#             */
/*   Updated: 2021/07/14 14:37:58 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
