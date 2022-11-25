/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:19:11 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 20:19:13 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, long unsigned n)
{
	long unsigned	count;

	count = 0;
	while (*(unsigned char *)s1 && *(unsigned char *)s2 && count < n)
	{
		if (*(unsigned char *)s1 - *(unsigned char *)s2 > 0)
			return (1);
		if (*s1 - *s2 < 0)
			return (-1);
		count++;
		s1++;
		s2++;
	}
	return (0);
}
