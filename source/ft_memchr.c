/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:17:11 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 21:17:21 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, long unsigned n)
{
	long unsigned	count;
	char			*addr;

	addr = (char *)s;
	count = 0;
	while (count < n && *addr)
	{
		if(*addr == c)
			return (addr);
		count++;
		addr++;
	}
	return (0);
}
