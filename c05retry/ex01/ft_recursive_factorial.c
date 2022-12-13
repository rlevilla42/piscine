/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:19:04 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/26 11:43:41 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb >= 1)
	{
			resultat *= nb;
			resultat = resultat * ft_recursive_factorial(nb - 1);
	}
	return (resultat);
}

/*int main(void)
{
	printf("%i\n", ft_recursive_factorial(2));
}*/

/*#include <stdio.h>
  int main()
 {
      int nb = -4185;
      int power = -592;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      nb = 0;
      power = 0;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
		 nb = -54;
      power = 0;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      nb = -3638;
      power = 1;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      nb = 1;
      power = 2;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      nb = -7;
      power = 8;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      return(0);
 }*/
