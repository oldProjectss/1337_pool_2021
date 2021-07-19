/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:27:34 by icourr            #+#    #+#             */
/*   Updated: 2021/06/30 09:35:26 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;

	i = 0;
	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	dest[y] = '\0';
	return (dest);
}
