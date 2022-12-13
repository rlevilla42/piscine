/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:54:43 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/15 16:10:10 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_min_to_maj_after_word(char	*str, int i)
{
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] -= 32;
	}
	return (str);
}

char	*ft_min_to_maj_inside_word(char	*str, int i)
{
	if (str[i] > 64 && str[i] < 91)
	{
		str[i] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
	while (str[i] != 0)
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			if (!(str[i] > 64 && str[i] < 91))
			{
				if (!(str[i] > 96 && str[i] < 123))
				{
					i++;
					ft_min_to_maj_after_word(str, i);
					continue ;
				}
			}
		}
		i++;
		ft_min_to_maj_inside_word(str, i);
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "R\nr943^nUUU";
	printf("%s\n", ft_strcapitalize(str));
}*/
