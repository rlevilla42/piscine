/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:51:29 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/24 15:01:04 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <strings.h>

int main(void)

{
	char src[] = "Raphael";
	char dest[100] = "Je m'appelle ";
	char dest2[100] = "Je m'appelle ";
	//char dest3[100] = "";
	printf("%s", ft_strncat(dest, src, 0));
	//printf("\n");
	printf("%s", strncat(dest2, src, 0));
}*/
