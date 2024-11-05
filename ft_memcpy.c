/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:03:20 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 23:05:14 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*nsrc;
	char	*ndest;

	if (dest == NULL)
		return (NULL);
	i = 0;
	nsrc = (char *)src;
	ndest = (char *)dest;
	while (i < n)
	{
		ndest[i] = (char)nsrc[i];
		i++;
	}
	return (dest);
}
