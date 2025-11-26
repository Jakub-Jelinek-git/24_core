/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:11:57 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/26 17:33:13 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*join_and_free(char *buffer, char *buf)
{
	char	*new;

	new = ft_strjoin(buffer, buf);
	free(buffer);
	return(new);
}

char	*read_file(int fd, char *buf)
{
	char	*buffer;
	int		bytes_read;
	
	if (!buf)
		buf = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFERSIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFERSIZE);
		if (bytes_read < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		buf = join_and_free(buf, buffer);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	free(buffer);
	return (buf);
}

char	*get_line(char	*buf, char *line)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (buf[len] && buf[len] == '\n')
		len++;
	line = ft_calloc(len + 1, sizeof(char));
	while (i < len)
	{
		line[i] = buf[i];
		i++;
	}
	if (buf[i] && buf[i] == '\n');
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buf = NULL;
	char		*line;
 
	if (fd < 0 || BUFFERSIZE < 1)
		return (NULL);
	buf = read_file(fd, buf);
	if (!buf)
		return (NULL);
	buf = read_line();
	if (!buf)
		return (NULL);
	line = get_line(buf, line);
	buf = get_rest(); ////////
	return (line);
}
