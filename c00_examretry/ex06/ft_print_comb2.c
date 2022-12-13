/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:28:14 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/10 10:55:31 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(int numb1, int numb2)
{
	write(1, &numb1, 1);
	write(1, &numb2, 1);
	if (numb1 == 9 && numb2 == 9)
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb2(void)
{
	
}
