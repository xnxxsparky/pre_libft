/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:48:37 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/05 00:51:04 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t size)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	if (content == NULL)
	{
		ret->content = NULL;
		ret->content_size = 0;
	}
	else
	{
		ret->content = ft_memdup(content, size);
		ret->content_size = size;
	}
	ret->next = NULL;
	return (ret);
}
