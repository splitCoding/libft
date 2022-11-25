/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:32 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 21:44:33 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	contains(char *dest, char *src, long unsigned i, long unsigned len)
{
	while (*dest && *src)
	{
		if (*dest++ != *src++)
			return (0);
		if (i >= len)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, long unsigned len)
{
	long unsigned	index;

	index = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && index < len)
	{
		if (*haystack == *needle)
			if (contains((char *)haystack, (char *)needle, index, len))
				return ((char *)haystack);
		haystack++;
		index++;
	}
	return (0);
}
