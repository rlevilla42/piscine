/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:05:51 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/29 16:04:57 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = (max - min);
	if (min >= max)
		return (tab = NULL);
	tab = malloc(sizeof(*tab) * size);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int main()
{
	int min = 6;
	int max = 55;
	ft_range(min, max);
	//mettre le printf dans la boucle sous le tab[i] de la ft;
	printf("%i\n", tab[i]);
}*/
