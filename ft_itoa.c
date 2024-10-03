/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:03:31 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/03 19:41:20 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_size(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n % 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = int_size(n);
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	ret[len] = '\0';
	while (n % 10)
	{
		ret[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (ret);
}
