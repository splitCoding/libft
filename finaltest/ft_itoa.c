/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:36:51 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 13:17:33 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_len(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	get_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	int		idx;
	char	*arr;

	len = get_number_len(n);
	idx = get_number_len(n);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (0);
	arr[idx--] = '\0';
	while (idx >= 0)
	{
		arr[idx--] = '0' + get_abs(n % 10);
		n /= 10;
	}
	if (arr[0] == '0' && len > 1)
		arr[0] = '-';
	return (arr);
}
