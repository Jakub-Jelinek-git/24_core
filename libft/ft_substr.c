/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:28:51 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/20 17:35:27 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*sub_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	sub_len = 0;
	while (s[start + sub_len] && sub_len < len)
		sub_len++;
	sub_str = malloc(sub_len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, sub_len + 1);
	return (sub_str);
}
