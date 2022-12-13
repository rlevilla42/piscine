/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:45:25 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/26 13:29:28 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultat;
	int	i;

	resultat = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (nb < 0 && power == 0)
		return (-1);
	else if (power == 0 || (nb == 0 && power == 0))
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 0)
	{
		resultat *= nb;
		resultat = resultat * ft_recursive_power(nb, power - 1);
	}
	return (resultat);
}

/*int main(void)
{
	printf("%i", ft_recursive_power(3, 5));
}*/
/*#include <stdio.h>
int main(void)
  {
      int nb = -3549;
      int power = -4071;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power)); 
      nb = 0;
      power = 0;
      ft_recursive_power(nb, power);
     printf("%d\n", ft_recursive_power(nb, power));
      nb = -2114;
      power = 0;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power));
      nb = -3110;
      power = 1;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power));
      nb = 1;
      power = 2;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power));
      nb = -6;
      power = 6;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power));
      nb = -7;
      power = 7;
      ft_recursive_power(nb, power);
      printf("%d\n", ft_recursive_power(nb, power));
      return(0);
  }*/
