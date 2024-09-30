/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:33:12 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/30 23:41:07 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	size_t	index;

	ret = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			ret = (char *)s + index;
		index++;
	}
	return (ret);
}
