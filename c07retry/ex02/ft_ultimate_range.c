/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:32:17 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/29 16:38:47 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	size;
	int	*tab;
	int	nb;

	j = 0;
	size = max - min;
	nb = min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (-1);
	while (nb < max)
	{
		tab[j] = nb;
		j++;
		nb++;
	}
	*range = tab;
	return (max - min);
}
/*
int main(void)
{
	int	min = 7;
	int	max = 11;
	int	*tab;
	char tst;

	ft_ultimate_range(&tab, min, max);
	//printf("%i\n%i, %i", ft_ultimate_range(&tab, min, max), tab[0], tab[1]);
}*/
