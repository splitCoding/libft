/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:45:28 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 19:45:29 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*addr;

	addr = (char *)s;
	while (*addr)
	{
		if (*addr == c)
			return (addr);
		addr++;
	}
	if (*addr == c)
		return (addr);
	return (0);
}
