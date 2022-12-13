/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:15:00 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/25 15:58:19 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	a;

	a = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar(a);
		ft_putnbr(nb * (-1));
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
}
/*int	main(void)
{
	int nb = -2147483648;
	ft_putnbr(nb);
}*/
