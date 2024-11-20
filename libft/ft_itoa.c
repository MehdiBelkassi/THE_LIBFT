/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:22:27 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/12 19:11:22 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(char *dest, unsigned int nmb, long int len)
{
	while (nmb > 0)
	{
		dest[len--] = '0' + (nmb % 10);
		nmb = nmb / 10;
	}
	return (dest);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	nmb;
	int				sign;
	long int		len;

	sign = 1;
	len = ft_len(n);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len--] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		sign = sign * (-1);
		nmb = n * (-1);
		dest[0] = '-';
	}
	else
	{
		nmb = n;
	}
	dest = ft_convert(dest, nmb, len);
	return (dest);
}
