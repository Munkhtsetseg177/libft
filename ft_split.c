/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:03:59 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/20 14:29:14 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.
*/

static int	ft_word_count(char const *s, char c)
{
	size_t	counter;
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			counter++;
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (counter);
}

static char	*ft_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start + i < end)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_split(char **split)
{
	char	**splitcopy;

	splitcopy = split;
	while (*splitcopy)
	{
		free(*splitcopy);
		splitcopy++;
	}
	free(split);
	return (NULL);
}

static char	**ft_do_sp(char const *s, char **sp, char c, int newword)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && newword < 0)
			newword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && newword >= 0)
		{
			sp[j] = ft_word(s, newword, i);
			if (!sp[j])
				return (free_split(sp));
			j++;
			newword = -1;
		}
		i++;
	}
	sp[j] = (NULL);
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = ft_do_sp(s, split, c, -1);
	return (split);
}
