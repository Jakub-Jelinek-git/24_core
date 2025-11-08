/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:41:44 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/08 15:59:02 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb)
	{
		if (nb == i * i)
			return i;
		i++;
	}
	return 0;
}

/*int main(void)
{
	printf("%i, ", ft_sqrt(0));
	printf("%i, ", ft_sqrt(1));
	printf("%i, ", ft_sqrt(-3));
	printf("%i, ", ft_sqrt(9));
	printf("%i, ", ft_sqrt(10));
	printf("%i", ft_sqrt(100));
	return(0);
}*/