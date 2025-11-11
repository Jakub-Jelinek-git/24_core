/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:24:19 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/11 17:36:33 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	get_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	i = 0;
	len = get_strlen(src);
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(void)
{
	char str[] = "dwedwdijwoidjwoijd§oiawjd§ůioj";
	ft_putstr(str);
	char *dup;
	dup = ft_strdup(str);
	write(1, "\n", 1);
	ft_putstr(dup);
	free(dup);
	return 0;
}*/
