/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 14:34:57 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/25 09:45:25 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_nol(char *p_s)
{
	size_t i;

	i = 0;
	while (p_s[i] != '\0')
	{
		i++;
	}
	return (p_s + i);
}

char			*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p_buff;
	char	*p_s;

	p_s = (char *)s;
	i = ft_strlen((char *)s);
	p_buff = (char *)s;
	while (i-- >= 0)
	{
		if (c == '\0')
			return (check_nol(p_s));
		if (s[i] == c)
			return (p_buff + i);
	}
	return (NULL);
}
