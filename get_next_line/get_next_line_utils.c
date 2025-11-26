/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:16:21 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/26 16:44:15 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - dst_len - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (src_len + dst_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str_join;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str_join = malloc(len);
	if (!str_join)
		return (NULL);
	str_join[0] = '\0';
	ft_strlcat(str_join, s1, len);
	ft_strlcat(str_join, s2, len);
	return (str_join);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	total;
	char	*byte_ptr;

	if (nmemb == 0 || size == 0)
		return (ft_calloc(1, 1));
	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	byte_ptr = (char *)ptr;
	i = 0;
	while (i < total)
		byte_ptr[i++] = 0;
	return (ptr);
}
