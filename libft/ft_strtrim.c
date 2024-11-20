/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelkass <mbelkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:57:29 by mbelkass          #+#    #+#             */
/*   Updated: 2024/11/07 18:31:26 by mbelkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkthat(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*dest;
	size_t	end;

	i = 0;
	if (!s1 || !set)
	{
		return (NULL);
	}
	end = ft_strlen(s1);
	while (s1[i] && ft_checkthat(s1[i], set))
		i++;
	while (end > i && ft_checkthat(s1[end - 1], set))
		end--;
	dest = (char *)malloc((end - i) + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1 + i, (end - i) + 1);
	return (dest);
}
