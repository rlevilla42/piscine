/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:00:05 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/27 19:47:13 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

/*int	ft_is_prime(int nb)
{
	int x;
	int	i;
	int	resultat;

	i = 1;
	x = 2;
	resultat = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (x < (nb / 2) && nb >= 2 && resultat != 0)
	{
		resultat = nb % x;
		if (resultat == 0 && x != nb)
		{
			return (0);
		}
		x++;
	}
	if (x >= (nb / 2))
		return (1);
	return (667);
}*/
int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x < (nb / 2))
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*int main()
 {
 	int nb = 2147483647;
 	ft_is_prime(nb);
 	printf("%d\n", ft_is_prime(nb));
 	nb = 419753;
 	ft_is_prime(nb);
 	printf("%d\n", ft_is_prime(nb));
 	nb = 285750;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      nb = 208217;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      return(0);
 }*/
#include <stdio.h>
int main()
  {
      int nb = 2147483647;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      nb = 419753;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      nb = 285750;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      nb = 208217;
      ft_is_prime(nb);
      printf("%d\n", ft_is_prime(nb));
      return(0);
  }
