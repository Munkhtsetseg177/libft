/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 06:07:50 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/09 12:36:13 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*newstr;

	newstr = s;
	while (*newstr || c == '\0')
	{
		if (*newstr == (char) c)
			return ((char *)newstr);
		newstr ++;
	}
	return (NULL);
}
