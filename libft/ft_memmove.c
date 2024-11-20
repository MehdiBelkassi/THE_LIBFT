/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:49:29 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/14 06:25:38 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*desti;
	const char	*srci;

	i = 0;
	desti = (char *)dest;
	srci = (const char *)src;
	if (!src && !dest)
		return (NULL);
	if (desti > srci)
	{
		while (len > 0)
		{
			desti[len - 1] = srci[len - 1];
			len--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, len);
		return (dest);
	}
}
