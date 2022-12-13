/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:01:44 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/26 13:33:43 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}
/*int main(void)
{
	 printf("%i", ft_fibonacci(10));
}*/
