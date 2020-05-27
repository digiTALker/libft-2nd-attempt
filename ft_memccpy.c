/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 16:09:42 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/25 09:52:59 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** int c should be finded in src instead dest - not obviosly
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dst;

	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if (*(p_src + i) == (unsigned char)c)
		{
			*(p_dst + i) = *(p_src + i);
			return (p_dst + i + 1);
		}
		*(p_dst + i) = *(p_src + i);
		i++;
	}
	return (NULL);
}
