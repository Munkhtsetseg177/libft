/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:37:44 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 13:12:03 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buf_dst;

	i = 0;
	buf_dst = ((char *)dst);
	if (dst == src)
		return (dst);
	else if (dst < src)
	{
		while (i < len)
		{
			((char *)buf_dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
	i = len;
		while (i > 0)
		{
			i--;
			((char *)buf_dst)[i] = ((char *)src)[i];
		}
	}
	return (buf_dst);
}
