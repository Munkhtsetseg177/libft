/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 06:07:50 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/15 10:52:53 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Locates the first occurrence of c (converted to a char) in the string
** pointed to by s.  The terminating null character is considered to be part
** of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
*/

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
