/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:49:47 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/22 13:46:03 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	//ft_strcmp("","");
	//printf("%d\n", ft_strcmp("zzza", "aaaz"));
	//printf("%d\n", strcmp("zzza", "aaaz"));

char *s011 = "b";
char *s012 = "a";
 printf("\n EX 00 :Result = %i \n", (ft_strcmp(s011, s012)));
 printf("Expected Result = %i \n\n", (strcmp(s011, s012)));

 char *s021 = "a";
 char *s022 = "a";
 printf("\n EX 00 :Result = %i \n", (ft_strcmp(s021, s022)));
 printf("Expected Result = %i \n\n", (strcmp(s021, s022)));
 char *s031 = "Bonjour les copains";
 char *s032 = "Hello my friends !";
 printf("\n EX 00 :Result = %i \n", (ft_strcmp(s031, s032)));
 printf("Expected Result = %i \n\n", (strcmp(s031, s032)));
	 char *s041 = "Hello World!";
 char *s042 = "Hello World!";
 printf("\n EX 00 :Result = %i \n", (ft_strcmp(s041, s042)));
 printf("Expected Result = %i \n\n", (strcmp(s041, s042)));
}*/
