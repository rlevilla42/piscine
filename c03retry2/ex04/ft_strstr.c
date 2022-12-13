/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:04:35 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/23 12:13:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

/*char *ft_reinitiliaze_pt_to_str(char *str, char *to_find, int i)
{
	if (
}*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (to_find[j] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		if (str[i] == '\0')
			return (0);
		j = 0;
		i++;
	}
	return (NULL);
}
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
char to_find41[50] = "1";
char str41[50] = "01111110000";
printf("\n -+- EX 04 :Result = %s \n", (ft_strstr(str41, to_find41)));
printf("Expected Result = %s \n\n", (strstr(str41, to_find41)));

char to_find42[50] = "Patate";
char str42[50] = "Patate chaude !";
printf("\n EX 04 :Result = %s \n", (ft_strstr(str42, to_find42)));
printf("Expected Result = %s \n\n", (strstr(str42, to_find42)));

char to_find43[50] = "Louis";
char str43[50] = "Jean-Luc Skywalker";
printf("\n EX 04 :Result = %s \n", (ft_strstr(str43, to_find43)));
printf("Expected Result = %s \n\n", (strstr(str43, to_find43)));

char to_find44[50] = "Jean";
char str44[50] = "";
printf("\n EX 04 :Result = %s \n", (ft_strstr(str44,to_find44)));
printf("Expected Result = %s \n\n", (strstr(str44, to_find44)));

char to_find45[50] = "Luc";
char str45[50] = "Jean-Luc Skywalker";
printf("\n EX 04 :Result = %s \n", (ft_strstr(str45,to_find45)));
printf("Expected Result = %s \n\n", (strstr(str45, to_find45)));
return(0);
}*/
