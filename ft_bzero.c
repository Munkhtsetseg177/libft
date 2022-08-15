/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:52:11 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/15 14:56:01 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** bzero(Command, 200) //bzero places 200 bytes 0x00's starting at the 
** location to which Command points
** strcpy(command, "./bettersearchnore\")
** Overwrites the bytes of a string (*s) to zeroes bytes, depending on the
** value of the variable n. If the variable n is zero (0), then nothing
** will happen.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i ++;
	}
}
