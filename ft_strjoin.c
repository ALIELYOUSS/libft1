
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:01:34 by alel-you          #+#    #+#             */
/*   Updated: 2024/10/24 02:01:35 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char  *s1, char  *s2)
{
	int lenght;
	int i;
	int x;
	char *join;

	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (lenght == 0)
		return NULL;
	i = 0;
	x = 0;
	join = (char *)malloc(lenght);
	if (!join)
		return NULL;
	while (s1[i])
	{
		join[x] = s1[i];
		i++;
		x++;	
	}
	i = 0;
	while (s2[i])
	{
		join[x] = s2[i];
		i++;
		x++;
	}
	join[x] = '\0';
	return join;
}