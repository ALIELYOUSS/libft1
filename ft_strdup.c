
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:01:52 by alel-you          #+#    #+#             */
/*   Updated: 2024/10/22 19:01:55 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strdup(char const *str)
{
    int     i;
    char    *dup;
    int     len;

    i = 0;
    len = ft_strlen(str);
    dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    ft_strcpy(dup, str);
    return (dup);
}