/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:42:33 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/20 14:47:32 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
** char *command;
** command = (char *) malloc(200); allocates 200 bytes (0x--) on the heap for 
** the string Command.
** the address of this location on the heap becomes the value of the pointer 
** Command

** Contiguously allocates enough space for count objects that are size bytes
** of memory each and returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	long	amount;
	size_t	i;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	amount = count * size;
	ptr = (char *)malloc(amount);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (amount-- > 0)
	{
		ptr[i++] = 0;
	}
	return ((void *)ptr);
}
