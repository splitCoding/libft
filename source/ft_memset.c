/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:35:12 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 15:35:14 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int		count;
	char	*dest;

	dest = (char *)b;
	count = 0;
	while (*dest && len > count++)
	{
		*dest = c;
		dest++;
	}
	return (b);
}
