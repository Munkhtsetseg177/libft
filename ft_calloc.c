/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:42:33 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 09:26:30 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
** char *command;
** command = (char *) malloc(200); allocates 200 bytes (0x--) on the heap for the string Command.
** the address of this location on the heap becomes the value of the pointer Command

** Contiguously allocates enough space for count objects that are size bytes
** of memory each and returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(count * sizeof(size));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count);
	return ((void *)ptr);
}
