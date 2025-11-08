/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:46:32 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/08 14:53:28 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int result;
	result = nb;
	
	if (nb < 0)
		return 0;
	if (nb == 0 || nb == 1)
		return 1;
	return(result *= ft_recursive_factorial(nb - 1));
}

/*int main(void)
{
	printf("%i, ", ft_recursive_factorial(0));
	printf("%i, ", ft_recursive_factorial(1));
	printf("%i, ", ft_recursive_factorial(-3));
	printf("%i, ", ft_recursive_factorial(7));
	printf("%i", ft_recursive_factorial(10));
	return(0);
}*/