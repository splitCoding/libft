/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:35:12 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 09:25:02 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	src;
	size_t			i;

	dest = b;
	src = c;
	i = 0;
	while (i++ < n)
		*dest++ = src;
	return (b);
}
