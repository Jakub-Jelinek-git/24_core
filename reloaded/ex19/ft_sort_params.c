/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:36:05 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/11 19:19:27 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		n;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		n = i + 1;
		while (n < argc)
		{
			if (ft_strcmp(argv[i], argv[n]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[n];
				argv[n] = temp;
			}
			n++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	sort(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
