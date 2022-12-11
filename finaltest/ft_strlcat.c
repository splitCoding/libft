/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:28:36 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 10:01:15 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_idx;
	size_t	dst_len;
	size_t	src_idx;
	size_t	src_len;

	dst_idx = 0;
	src_idx = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	while (dst[dst_idx])
		dst_idx++;
	while (dst_idx + 1 < dstsize && src[src_idx])
		dst[dst_idx++] = src[src_idx++];
	dst[dst_idx] = '\0';
	if (dstsize < dst_len)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
