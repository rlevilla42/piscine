/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:39:42 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/09 15:19:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		n;

	c = 'z';
	n = 26;
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
		c--;
	}
}
