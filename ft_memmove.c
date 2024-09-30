/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 03:04:36 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/30 03:37:36 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*tmp = NULL;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	tmp = ft_memcpy(tmp, s, n);
	d = ft_memcpy(d, tmp, n);
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char	dest[] = "je mange des pieds";
	char	src[] = "NON ";
	printf("%p", ft_memmove(dest, src, 4));
	return (0);
}
