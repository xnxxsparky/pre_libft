/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:04:14 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/01 00:24:26 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*copy;

	i = 0;
	copy = (void *)s;
	while (copy[i] && i < n)
	{
		if (copy[i] == c)
			return (copy + i);
		i++;
	}
	return (0);
}
