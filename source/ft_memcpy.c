/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:34:49 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 15:34:51 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, long unsigned n)
{
	long unsigned	count;

	count = 0;
	while (count < n)
	{
		*((char *)dst + count) = *((char *)src + count);
		count++;
	}
	return (dst);
}
