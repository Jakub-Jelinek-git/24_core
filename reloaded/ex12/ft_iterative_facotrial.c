/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_facotrial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:34:18 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/08 16:47:35 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= 2)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*int main(void)
{
	printf("%i, ", ft_iterative_factorial(0));
	printf("%i, ", ft_iterative_factorial(1));
	printf("%i, ", ft_iterative_factorial(-3));
	printf("%i, ", ft_iterative_factorial(5));
	printf("%i", ft_iterative_factorial(10));
	return(0);
}*/