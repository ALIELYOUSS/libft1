/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:51:02 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/06 17:34:56 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		c;
	char	*sub;

	c = 0;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	if (len <= 0)
		return (NULL);
	while (s[start])
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
