/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:54:53 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/22 12:52:14 by fboumell         ###   ########.fr       */
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

	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
