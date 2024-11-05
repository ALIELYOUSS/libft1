
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:09:34 by alel-you          #+#    #+#             */
/*   Updated: 2024/10/27 22:09:35 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	if (!dst || !dstsize)
		return (ft_strlen(src));
	size_t dlen;
	size_t slen; 
	size_t i;
	
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize <= dlen)
		return (dlen + slen);
	while (src[i] && dlen < dstsize - 1)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (dlen - i + slen);
}
