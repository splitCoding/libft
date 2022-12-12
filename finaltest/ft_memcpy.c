/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:34:49 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 09:50:27 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	if (!dst && !src)
		return (0);
	new_dst = dst;
	new_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dst++ = *new_src++;
	return (dst);
}
