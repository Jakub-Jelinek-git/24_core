/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:41:24 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/14 09:15:46 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;
	const unsigned char	*s;
	unsigned char			*d;

	i = 0;
	s = (const unsigned char)src;
	d = (unsigned char)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}