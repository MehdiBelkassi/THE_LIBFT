/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:17:53 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/14 09:36:45 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int x)
{
	int		i;
	size_t	len_d;

	i = 0;
	len_d = ft_strlen(s);
	if ((char)x == '\0')
		return ((char *)&s[len_d]);
	while (len_d > 0)
	{
		if ((char)s[len_d - 1] == (char)x)
			return ((char *)&s[len_d - 1]);
		len_d--;
	}
	return (NULL);
}
