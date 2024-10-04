/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 00:43:41 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/05 00:49:50 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void const *s, size_t len)
{
	void	*ret;

	ret = (void *)malloc(len);
	if (!ret)
		return (NULL);
	return (ft_memcpy(ret, s, len));
}
