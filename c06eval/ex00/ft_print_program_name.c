/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:49:38 by rlevilla          #+#    #+#             */
/*   Updated: 2022/06/27 13:27:24 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*char	*ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (0);
}*/

char	ft_putchar(char d)
{
	write(1, &d, 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 1;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
