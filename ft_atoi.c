/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:31:25 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 15:00:08 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** atoi("123") => 123 //
** Converts the initial portion of a string pointed to the variable string, to
** an int representarion (type).
*/

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static void	remove_whitespaces(const char **nptr)
{
	while (ft_isspace(**nptr))
		(*nptr)++;
}

static int	determine_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	if (**nptr == '-')
		sign = -1;
	if (**nptr == '-' || **nptr == '+')
		(*nptr)++;
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	nbr;

	remove_whitespaces(&nptr);
	sign = determine_sign(&nptr);
	nbr = 0;
	while (ft_isdigit(*nptr)
		&& nbr >= -2147483648 && nbr <= +2147483647)
		nbr = nbr * 10 + (*(nptr++) - '0');
	nbr *= sign;
	if (nbr < -2147483648)
		return (0);
	if (nbr > +2147483647)
		return (-1);
	return (nbr);
}
