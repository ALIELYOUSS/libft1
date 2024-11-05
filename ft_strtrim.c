
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:46:57 by alel-you          #+#    #+#             */
/*   Updated: 2024/10/27 20:46:58 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int len;
	int i;
	char *new;

	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	len = (end - start + 1);
	new = (char *)malloc(len + 1);
	if (!new)
		return NULL;
	while (s1[start] && i < len)
		new[i++] = s1[start++];
	new[i] = '\0';
	return new;
}
