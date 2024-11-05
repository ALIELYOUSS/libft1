/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:39:27 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 23:32:16 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!dst)
	{
		return (NULL);
	}
	if (dst < src)
	{
		return (ft_memcpy(dst, (void *)src, len));
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
		return (dst);
	}
	return (NULL);
}
