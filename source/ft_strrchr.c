/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:45:28 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 19:45:29 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*addr;

	addr = 0;
	while (*s)
	{
		if (*s == c)
			addr = (char *)s;
		s++;
	}
	if (*s == c)
		addr = (char *)s;
	return (addr);
}
