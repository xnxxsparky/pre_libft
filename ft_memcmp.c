/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:26:00 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/03 20:03:33 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*side_one;
	unsigned char	*side_two;

	i = 0;
	side_one = (unsigned char *)s1;
	side_two = (unsigned char *)s2;
	while ((side_one[i] == side_two[i]) && i < n)
		i++;
	if (i >= n)
		return (0);
	return (side_one[i] - side_two[i]);
}
