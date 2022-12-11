/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:38:06 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 09:25:37 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dest;
	unsigned char		*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dest = (unsigned char *)dst;
		new_src = (unsigned char *)src;
		while (len--)
			*new_dest++ = *new_src++;
		return (dst);
	}
	new_dest = (unsigned char *)dst + (len - 1);
	new_src = (unsigned char *)src + (len - 1);
	while (len--)
		*new_dest-- = *new_src--;
	return (dst);
}
