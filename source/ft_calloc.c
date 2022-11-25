/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:43:28 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 22:43:29 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(long unsigned count, long unsigned size)
{	
	void			*arr;
	long unsigned	index;
	long unsigned	total_size;

	index = 0;
	total_size = count * size;
	arr = malloc(total_size);
	while (index < total_size)
		((char *)arr)[index++] = 0;
	return (arr);
}
