/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:18:41 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/14 06:32:36 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int find, size_t count)
{
	size_t			i;
	unsigned char	*s1;
	size_t			len;

	len = ft_strlen(s);
	s1 = (unsigned char *)s;
	i = 0;
	while (i < count)
	{
		if (s1[i] == (unsigned char)find)
			return ((unsigned char *)&s1[i]);
		i++;
	}
	return (0);
}
