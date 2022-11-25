/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:08:20 by sanghyep          #+#    #+#             */
/*   Updated: 2022/11/25 22:08:21 by sanghyep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\t' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	minus;

	num = 0;
	minus = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
		minus++;
	str++;
	while (is_num(*str))
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (minus % 2 == 1)
		num *= -1;
	return (num);
}
