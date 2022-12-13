/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamers <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 10:14:01 by tkamers           #+#    #+#             */
/*   Updated: 2022/06/12 11:17:29 by tkamers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_haut(int x);

void	ft_mid(int x);

void	rush(int x, int y)
{
	int	y1;

	y1 = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "ERREUR\n", 7);
	}
	else if (y == 1)
	{
		ft_haut(x);
		write(1, "\n", 1);
	}
	else
	{
		ft_haut(x);
		write(1, "\n", 1);
		while (y1 < y -2)
		{
			ft_mid(x);
			write(1, "\n", 1);
			y1++;
		}
		ft_haut(x);
		write(1, "\n", 1);
	}
}

void	ft_haut(int x)
{
	int	x1;

	x1 = 0;
	if (x == 1)
	{
		write(1, "o", 1);
	}
	else
	{
		write (1, "o", 1);
		while (x1 < x -2)
		{
			write(1, "-", 1);
			x1++;
		}
		write(1, "o", 1);
	}
}

void	ft_mid(int x)
{
	int	x1;

	x1 = 0;
	if (x == 1)
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, "|", 1);
		while (x1 < x - 2)
		{
			write(1, " ", 1);
			x1++;
		}
		write(1, "|", 1);
	}
}
