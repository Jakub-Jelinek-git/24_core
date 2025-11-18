/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:58:06 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/16 12:34:38 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_whole(const char *big, const char *little, size_t len)
{
	size_t	k;
	size_t	little_len;

	little_len = ft_strlen(little);
	k = 0;
	if (little_len > len)
		return (0);
	while (k < little_len)
	{
		if (big[k] != little[k])
			return (0);
		k++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0] && is_in_whole(big + i, little, len - i))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
