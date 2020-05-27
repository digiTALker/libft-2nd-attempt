/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 11:49:52 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/20 22:33:49 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*p_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(p_s = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		p_s[i] = (*f)(i, (char)s[i]);
		i++;
	}
	p_s[i] = '\0';
	return (p_s);
}
