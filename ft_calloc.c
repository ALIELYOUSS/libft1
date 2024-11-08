/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:21 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/08 16:02:25 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	len;

	len = size * count;
	if (!size || count > SIZE_MAX / size)
		return (NULL);
	ret = malloc(len);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
