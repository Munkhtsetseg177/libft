/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:07:17 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/15 11:27:30 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Outputs the string s to the file descriptor fd followed by a ’\n’.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
