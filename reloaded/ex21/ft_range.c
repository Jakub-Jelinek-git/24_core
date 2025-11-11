/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:41:50 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/11 18:06:57 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc(sizeof(int) * len);
	if (!array)
		return (NULL);
	while (min < max)
		array[i++] = min++;
	return (array);
}

/*int main(void)
{
    int *arr;
    int i;
    int min = 3;
    int max = 10;

    arr = ft_range(min, max);
    if (arr == NULL)
    {
        printf("Returned NULL pointer.\n");
        return (1);
    }

    printf("Range %d to %d (excluding max):\n", min, max);
    for (i = 0; i < (max - min); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return (0);
}*/
