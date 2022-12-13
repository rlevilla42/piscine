/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:46:22 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/26 18:13:23 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	resultat = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (nb < 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power == 0 && nb == 0)
		return (1);
	while (nb != 0 && i <= power)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}
/*
int main(void)
{
	printf("%i", ft_iterative_power(3, 5));
}*/
/*
#include <stdio.h>
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
      nb = -7;
      power = 7;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      nb = -2295;
      power = 0;
      ft_iterative_power(nb, power);
      printf("%d\n", ft_iterative_power(nb, power));
      return(0);
  }*/
