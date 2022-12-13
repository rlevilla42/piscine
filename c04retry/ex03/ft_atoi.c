/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:20:51 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/20 18:49:18 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	track_number_of_minus;

	i = 0;
	track_number_of_minus = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			track_number_of_minus++;
			i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (track_number_of_minus % 2 != 0)
		result = result * (-1);
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "++-+219ne\n fo786ufou";
	//char str2[] = "\t\v\f+++--+-678ne\n fo786ufou";
	//ft_atoi(str);
	printf("%d\n", ft_atoi(str));
   	//printf("%d\n", atoi(str2));	
}*/
