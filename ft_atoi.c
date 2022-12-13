/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:08:20 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/13 11:54:15 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	bigger_than_long(int sign, long long res)
{
	long long	min;

	min = 9223372036854775807;
	min++;
	if (sign == -1)
	{
		if (res == min)
			return (res);
		else
			return (0);
	}
	return (-1);
}

int	ft_atoi(const char *s)
{
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t' \
			|| *s == '\v' || *s == '\r' || *s == '\f')
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign = -1;
	while (ft_isdigit(*s))
	{
		res = res * 10 + (*s++ - '0');
		if (res < 0)
			return (bigger_than_long(sign, res));
	}
	return (res * sign);
}
