/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:01:10 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/27 23:03:09 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_putstr(char *c)
{
	int	j;

	j = 0;
	while (c[j] != '\0')
	{
		write(1, &c[j], 1);
		j++;
	}
	return (0);
}

char	ft_putchar(char d)
{
	write(1, &d, 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
