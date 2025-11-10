/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:09:34 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/10 18:18:53 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}