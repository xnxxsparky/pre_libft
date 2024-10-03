/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:53:00 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/03 21:57:10 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;

	ret = (char *)malloc((size + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (size > 0)
		ret[size--] = '\0';
	ret[0] = '\0';
	return (ret);
}
