/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:26:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/21 13:48:38 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int n;

	(void)argc;
	n = 1;
	while (argv[n])
	{
		ft_putstr(argv[n]);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
