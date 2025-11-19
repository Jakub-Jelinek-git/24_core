/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjelinek <jjelinek@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:16:01 by jjelinek          #+#    #+#             */
/*   Updated: 2025/11/19 13:13:35 by jjelinek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	num;

	num = 0;
	while(*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			num++;
			while (*s && *s != c)
				s++;
		}
	}
	return (num);
}

static char	*create_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		word[i] = *s;
		i++;
		s++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **array, int num_w)
{
	int	i;

	i = 0;
	while (i < num_w)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char	**array;
	int		num_w;
	int		i;

	num_w = num_words(s, c);
	array = malloc((num_w + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			array[i] = create_word(s, c);
			if (!array[i])
				return (free_all(array, i));
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}
