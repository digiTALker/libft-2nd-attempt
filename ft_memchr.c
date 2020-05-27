/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:34:51 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/18 22:53:34 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n)
	{
		if (*((unsigned char *)s + i) == ((unsigned char)c))
		{
			return ((unsigned char *)s + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
