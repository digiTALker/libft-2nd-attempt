/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 13:11:33 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/26 13:56:49 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size > len_dst)
	{
		while (src[i] != '\0' && ((len_dst + i) != (size - 1)))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	if (size > len_dst)
		dst[len_dst + i] = '\0';
	else
		return (len_src + size);
	return (len_src + len_dst);
}
