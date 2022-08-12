/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:37:44 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/08 14:10:19 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_new;
	char	*src_new;
	size_t	i;

	dst_new = ((char *)dst);
	src_new = ((char *)src);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			dst_new [len - 1 - i] = src_new [len - 1 - i];
			i ++;
		}
	}
	else
	{
		while (i < len)
		{
			dst_new[i] = src_new[i];
			i ++;
		}
	}
	return (dst);
}
