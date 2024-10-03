/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:09:28 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/03 17:21:46 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int		needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && (i < n))
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, needle_len) == 0 && (i + needle_len <= n))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
