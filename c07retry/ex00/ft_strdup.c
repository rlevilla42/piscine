/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:57:54 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/29 15:58:08 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*tab;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	tab = malloc(sizeof(*tab) * (len + 1));
	while (src[i] != '\0' && i < len)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int main(void)
{
	char src[] = "Boug en mw1";
	char src2[] = "Boug en mw1";
	char src3[] = "123456!@#$%^&";
	char src4[] = "123456!@#$%^&";
	char src5[] = "qwertyuiop./;-98 098@@@";
	char src6[] = "qwertyuiop./;-98 098@@@";
	printf("%s\n", ft_strdup(src));
	printf("%s\n\n", strdup(src));
	printf("%s\n", ft_strdup(src2));
	printf("%s\n\n", strdup(src2));
	printf("%s\n", ft_strdup(src3));
	printf("%s\n\n", strdup(src3));
	printf("%s\n", ft_strdup(src4));
	printf("%s\n\n", strdup(src4));
	printf("%s\n", ft_strdup(src5));
	printf("%s\n\n", strdup(src5));
	printf("%s\n", ft_strdup(src6));
	printf("%s\n", strdup(src6));
}*/
