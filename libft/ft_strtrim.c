/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:56:47 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/20 17:35:13 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start == end)
		return (ft_calloc(1, 1));
	end--;
	while (end >= start && is_in(set, s1[end]))
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
