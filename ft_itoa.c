/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:13:06 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 19:03:09 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_itoa(int a)
{
	char	*str;
	long	tmp;
	int		sign;
	int		len;

	sign = 0;
	len = 0;
	str = 0;
	if (a == 0)
		return (0);
	if (a < 0)
	{
		len++;
		tmp = a;
		tmp *= -1;
		sign = 1;
	}
	else
		tmp = a;
	while (a != 0)
	{
		a /= 10;
		len++;
	}
	len++;
	str = (char *)malloc(len + sign);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len > 0)
	{
		len--;
		str[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
// #include <stdlib.h>
// #include <limits.h>
// int main()
// {
// 	char *s = ft_itoa(1);
// 	printf("%s\n", s);
// }
