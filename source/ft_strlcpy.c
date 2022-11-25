/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:28:36 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 18:28:38 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	strlcpy_get_size(const char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size)
{
	unsigned int	src_len;
	unsigned int	idx;

	idx = 0;
	src_len = strlcpy_get_size(src);
	while (src[idx] && idx + 1 < size)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = 0;
	return (src_len);
}
