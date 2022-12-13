/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:26:03 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 13:26:07 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	idx;
	char	*new_str;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		new_str[idx] = f(idx, s[idx]);
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}
