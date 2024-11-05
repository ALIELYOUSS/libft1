/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:03:32 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 23:11:29 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	t;
	size_t			i;

	if (!b || !len)
		return (b);
	s = (unsigned char *)b;
	t = (unsigned char)c;
	i = 0;
	while (i < len)
		s[i++] = t;
	return (b);
}
