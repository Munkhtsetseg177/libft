/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:37:44 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/06 14:00:37 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *memmove(void *dst, const void *src, size_t len)
 {
	unsigned char *char_dst;
	unsigned char *char_srs;
	size_t	i;

	char_dst = ((unsigned char*)dst);
	char_srs =((unsigned char *)src);
	i = 0;
	if (dst > src)
	{
		while (i < len)		
		{
			char_dst[len - 1 -i]= char_srs[len - 1 - i];
			i ++;
		}
	}
	else
	{
		while(i < len)
		{
			char_dst[i] = char_srs[i];
			i ++;
		}
	}
	return (dst);
 }