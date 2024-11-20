/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:19:04 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/12 19:05:08 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long int res, int sign, char next_digit)
{
	if (res > (LONG_MAX - (next_digit - '0')) / 10)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			sign;
	int			overflow_check;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		overflow_check = check_overflow(res, sign, str[i]);
		if (overflow_check != 1)
			return (overflow_check);
		res = res * 10 + (str[i++] - '0');
	}
	return (res * sign);
}
