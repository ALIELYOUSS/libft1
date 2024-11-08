/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:29:28 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/06 20:59:00 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(char *s, char c)
{
	int	i;
	int	count;

	if (!s || !c)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c && s[i + 1] == c)
			count++;
		else if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	printf("%d\n", count);
	return (count);
}

static int	ft_lenght(char *s, char c)
{
	int	i;
	int	len;

	if (!s)
		return (0);
	i = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		if (s[i] != c)
			len++;
		i++;
	}
	printf("len = %d\n", len);
	return (len);
}

static char	**ft_free(char **word, unsigned int i)
{
	while (i--)
		free(word[i]);
	free(word);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	t_var	p;

	p.i = 0;
	p.len = 0;
	p.n = 0;
	p.words = ft_words_count(s, c);
	p.sp = (char **)malloc(sizeof(char *) * (p.words + 1));
	if (!p.sp)
		return (NULL);
	while (p.i < p.words)
	{
		p.x = 0;
		p.len = ft_lenght(s + p.n, c);
		p.sp[p.i] = (char *)malloc(p.len + 1);
		if (!p.sp[p.i])
			return (ft_free(p.sp, p.i));
		while (s[p.n] == c)
			p.n++;
		while (s[p.n] != c)
			p.sp[p.i][p.x++] = s[p.n++];
		p.sp[p.i][p.x] = '\0';
		p.i++;
	}
	p.sp[p.i] = (NULL);
	return (p.sp);
}

//int main(int ac, char **av)
//{
//	int i = 0;
//	char **n = ft_split(av[1], ' ');
//	while (n[i])
//	{
//		printf("%s\n", n[i]);
//		i++;
//	}
//}