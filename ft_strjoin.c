/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:01:34 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/06 17:38:22 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_len(char *s1, const char *s2)
{
	int	lenght;

	if (!s1 || !s2)
		return (0);
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (lenght == 0)
		return (0);
	return (lenght);
}

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*join;
	int		lenght;

	lenght = ft_check_len(s1, s2);
	if (lenght == 0)
		return (NULL);
	join = malloc(lenght);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, lenght);
	return (join);
}
