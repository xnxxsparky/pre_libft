/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:57:05 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/30 21:32:41 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, needle_len) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
