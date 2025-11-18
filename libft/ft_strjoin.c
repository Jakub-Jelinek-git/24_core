/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:54:40 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/18 18:29:07 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
