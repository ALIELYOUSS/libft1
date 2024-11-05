/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:21 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 20:08:30 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	size_t	len;

	len = size * count;
	if (!size || count > SIZE_MAX / size)
		return (NULL);
	r = malloc(len);
	if (!r)
		return (NULL);
	ft_memset(r, 0, size);
	return (r);
}
