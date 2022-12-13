/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:03:32 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/30 00:20:36 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

int	ft_strlen_all_size(char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
		j = 0;
	}
	return (k);
}

char	*ft_strcat_sep(char *str, char *sep)
{
	int	i;
	int	size_str;
	int	size_sep;

	i = 0;
	size_str = ft_strlen(str);
	size_sep = ft_strlen(sep);
	while (i < size_sep)
	{
		str[size_str] = sep[i];
		i++;
		size_str++;
	}
	str[size_str] = '\0';
	return (str);
}

char	*ft_strcat(char *str, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = ft_strlen(str);
	while (src[i1] != '\0')
	{
		str[i2] = src[i1];
		i1++;
		i2++;
	}
	str[i2] = '\0';
	return (str);
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;
	int		total_char_nb;

	i = 0;
	j = 0;
	total_char_nb = ft_strlen_all_size(strs, size) + (ft_strlen(sep) * size);
	str = malloc(sizeof(**strs) * total_char_nb + 1);
	if (size == 0)
		return (str);
	else if (str == NULL)
		return (str);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (j++ < (size - 1))
			ft_strcat_sep(str, sep);
		i++;
	}
	*strs = str;
	return (str);
}
/*#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int        main(void)
{
    printf("Hello main !\n");
        char *join[] =
            {
                    "Salut",
                    "jeune",
                    "padawan",
                    "africain",
                    "dandalousie"
            };
    printf("%s",ft_strjoin(5,join," FREEZE RAEl "));
    printf("\n");
    return (0);
}*/
