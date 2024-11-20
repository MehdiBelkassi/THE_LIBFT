/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:18:15 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/12 19:32:06 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_s;
	size_t	i;
	size_t	len_d;
	size_t	repdest;

	i = 0;
	if (!src || size == 0)
		return (ft_strlen(src) + size);
	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	repdest = len_d;
	if (size == 0 || size <= len_d)
	{
		return (len_s + size);
	}
	while (src[i] && i < size - len_d - 1)
	{
		dest[repdest] = src[i];
		i++;
		repdest++;
	}
	dest[repdest] = '\0';
	return (len_d + len_s);
}
