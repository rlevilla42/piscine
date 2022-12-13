/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:09:53 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/13 20:28:44 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size - 1;
	j = 0;
	while (j < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j++;
		i--;
	}
}
/*int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};
	int size;

	size = 5;
	ft_rev_int_tab(tab, size);
}*/
