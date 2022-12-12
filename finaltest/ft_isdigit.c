/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyep <sanghyep@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:40:51 by sanghyep          #+#    #+#             */
/*   Updated: 2022/12/11 09:23:42 by sanghyep         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
