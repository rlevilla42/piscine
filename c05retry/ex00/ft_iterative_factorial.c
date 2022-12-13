/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:56:52 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/26 11:34:26 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		resultat *= i;
		i++;
	}
	return (resultat);
}
/*
int main(void)
{
	printf("%i\n", ft_iterative_factorial(-91));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i\n", ft_iterative_factorial(2));
	printf("%i\n", ft_iterative_factorial(12));
	printf("%i\n", ft_iterative_factorial(3));
	printf("%i\n", ft_iterative_factorial(4));
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(6));
	printf("%i\n", ft_iterative_factorial(7));
	printf("%i\n", ft_iterative_factorial(8));
	printf("%i\n", ft_iterative_factorial(9));
	printf("%i\n", ft_iterative_factorial(10));
	printf("%i\n", ft_iterative_factorial(11));
}*/
