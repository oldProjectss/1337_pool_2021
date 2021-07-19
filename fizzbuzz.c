/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:26:43 by icourr            #+#    #+#             */
/*   Updated: 2021/07/04 20:03:24 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			ft_putchar('-');
			nb = nb * -1;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main()
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if (i % 4 == 0)
		{
			if (i % 7 == 0)
			{
				write (1, "fizzbuzz", 8);
				write (1, "\n", 1);
			}
			else
			{
				write (1, "fizz", 4);
				write (1, "\n", 1);
			}
		}
		else if (i % 7 == 0)
		{
			write (1, "buzz", 4);
			write (1, "\n", 1);
		}
		else
		{
			ft_putnbr(i);
			write (1, "\n", 1);
		}
		i++;
	}
}
