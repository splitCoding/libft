/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 09:30:35 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 09:49:29 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**free_all(char **mem, size_t i)
{
	size_t	idx;

	idx = 0;
	while (idx < i)
	{
		free(mem[idx]);
		mem[idx++] = NULL;
	}
	free(mem);
	mem = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*start;
	char	**mem;

	i = 0;
	mem = (char **)malloc((sizeof(char *) * (get_word_count(s, c) + 1)));
	if (!s || !mem)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			mem[i] = ft_substr(start, 0, (s - start));
			if (!mem[i++])
				return (free_all(mem, i));
		}
		else
			++s;
	}
	mem[i] = NULL;
	return (mem);
}
