/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:25:50 by icourr            #+#    #+#             */
/*   Updated: 2021/07/03 19:39:36 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	totalLenght(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
		y++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		y++;
	}
	return (y);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;
	unsigned int	length;

	i = 0;
	x = 0;
	y = 0;
	length = totalLenght(dest, src, size);
	while (src[y] != '\0')
		y++;
	y = 0;
	while (dest[y] != '\0')
		y++;
	while (src[i] != '\0' && y + 1 < size)
	{
		dest[y] = src[i];
		y++;
		i++;
	}
	dest[y] = '\0';
	return (length);
}
