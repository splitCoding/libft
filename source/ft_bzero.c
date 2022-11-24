/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:40:51 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/24 15:40:53 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long n) 
{
	char				*dest;
	unsigned long		count;

	dest = (char *)s;
	count = 0;
	while (*dest && count++ < n)
	{
		*dest = 0;
		dest++;
	}
}
