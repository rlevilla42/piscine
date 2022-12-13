/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:19:33 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/27 19:46:31 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int			resultat;
	int long	i;

	resultat = 0;
	i = 0;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 2)
	{
		while (i < 46341)
		{
			resultat = i * i;
			if (resultat == nb)
				return (i);
			i++;
		}
		if (i >= 46341)
			return (0);
	}
	return (0);
}
/*#include <stdio.h>*/
/*int main(void)
{
	printf("La racine carre du parametre est: %i\n", ft_sqrt(2147395600));
	printf("La racine carre du parametre est: %i\n", ft_sqrt(214295600));
	printf("La racine carre du parametre est: %i\n", ft_sqrt(21473956));
	printf("La racine carre du parametre est: %i\n", ft_sqrt(214739));
	printf("La racine carre du parametre est: %i\n", ft_sqrt(2147395600));
	printf("La racine carre du parametre est: %i\n", ft_sqrt(2147395647));
}*/
#include <stdio.h>
int main()
  {
      int nb = 1640045925;
      ft_sqrt(nb);
      printf("%d\n", ft_sqrt(nb));
      nb = 2147395600;
      ft_sqrt(nb);
      printf("%d\n", ft_sqrt(nb));
      nb = 2147483646;
      ft_sqrt(nb);
     printf("%d\n", ft_sqrt(nb));
      nb = 154778481;
      ft_sqrt(nb);
      printf("%d\n", ft_sqrt(nb));
      nb = 147373041;
      ft_sqrt(nb);
 		printf("%d\n", ft_sqrt(nb));
      nb = 888159204;
      ft_sqrt(nb);
     printf("%d\n", ft_sqrt(nb));
      nb = 1493356294;
      ft_sqrt(nb);
      printf("%d\n", ft_sqrt(nb));
      return(0);
  }
