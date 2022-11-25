/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:32:43 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 21:32:44 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, long unsigned n)
{
	long unsigned	count;

	count = 0;
	while (*(unsigned char *)s1 && *(unsigned char *)s2 && count < n)
	{
		if (*(unsigned char *)s1 - *(unsigned char *)s2 > 0)
			return (1);
		if (*(unsigned char *)s1 - *(unsigned char *)s2 < 0)
			return (-1);
		count++;
		s1++;
		s2++;
	}
	return (0);
}
