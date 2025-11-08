/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:17:54 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/08 12:28:08 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;
	printf("%i, ", a);
	printf("%i\n\n", b);
	ft_swap(&a, &b);
	printf("%i, ", a);
	printf("%i", b);
	return 0;
}*/