/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:03:06 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/07 13:41:11 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_check_negg(int a)
{
	long	tmp;

	if (a < 0)
		a *= -1;
	tmp = a;
	return (tmp);
}

static int	ft_itoa_len(int a)
{
	int	tmp;
	int	len;

	len = 0;
	if (a < 0)
	{
		tmp = a;
		tmp *= -1;
		len++;
	}
	else
		tmp = a;
	while (tmp)
	{
		len++;
		tmp /= 10;
	}
	return (len);
}

char	*ft_itoaaa(int a)
{
	int		len;
	long	tmp;		
	char	*str;

	tmp = ft_check_negg(a);
	len = ft_itoa_len(a) + 1;
	str = (char *)malloc(len);
	str[len] = '\0';
	len--;
	while (len)
	{
		len--;
		str[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (a < 0)
		str[0] = '-';
	return (str);
}
