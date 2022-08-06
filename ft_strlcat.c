/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:39:54 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/07/19 23:45:50 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(const char *s)
{
    size_t count;

    count = 0;
    while(s[count] !='\0')
        count ++;
    return(count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize && dst[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0' && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}
