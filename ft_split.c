/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:40:33 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/26 17:24:23 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		h_many_slices(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != s[i - 1] && s[i] != '\0')
			if (i > 0)
				count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static int		slice_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static void		*ft_purge(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char			**array;
	int				i;
	unsigned int	total;

	if (!s || !c)
		return (NULL);
	i = 0;
	total = 0;
	if (!(array = (char**)malloc(sizeof(char*) * ((h_many_slices(s, c)) + 1))))
		return (NULL);
	while ((i < (h_many_slices(s, c))) & (s[total] != '\0'))
	{
		while (s[total] && s[total] == c)
			total++;
		if (!(array[i] = ft_substr(s, total, slice_len(&s[total], c))))
			return (ft_purge(array, i));
		while (s[total] && s[total] != c)
			total++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
