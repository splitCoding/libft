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
static int	get_size(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

unsigned long	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	idx;

	idx = 0;
	dest_len = get_size(dest);
	src_len = get_size(src);
	if (dest_len >= size)
		return (src_len + size);
	while (src[idx] && idx + 1 + dest_len < size)
	{
		dest[dest_len + idx] = src[idx];
		idx++;
	}
	dest[dest_len + idx] = 0;
	return (dest_len + src_len);
}
