/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:40:48 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/25 13:55:13 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_str1;
	const unsigned char	*p_str2;

	p_str1 = s1;
	p_str2 = s2;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (p_str1[i] != p_str2[i])
				return (p_str1[i] - p_str2[i]);
			i++;
		}
	}
	return (0);
}
