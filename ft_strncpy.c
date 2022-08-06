/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:14:54 by paulohl           #+#    #+#             */
/*   Updated: 2022/08/05 20:04:33 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, int len)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
