/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:53:56 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/08 15:58:00 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int		i;
	int		sign;
	long	result;
	int		tmp;

	i = 0;
	sign = 1;
	result = 0;
	tmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = (tmp * 10) + str[i] - '0';
		result = tmp;
		i++;
	}
	return (result * sign);
}
