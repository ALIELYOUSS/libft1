/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:29:28 by alel-you          #+#    #+#             */
/*   Updated: 2024/11/05 23:36:54 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// struct split
// {
// 	unsigned int words;
// 	unsigned int len;
// 	unsigned int td;
// 	unsigned int indx;
// 	unsigned int x;

// } typdef index;
// static int	ft_is(char a, char b)
// {
// 	if (a != b)
// 		return (1);
// 	else
// 		return (0);
// }

static int	ft_words_count(char *s, char c)
{
	int	i;
	int	count;

	if (!s || c)
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
	return (count);
}

static int	ft_lenght(char *s, char c)
{
	int	i;
	int	len;

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
	unsigned int	i;
	unsigned int	x;
	unsigned int	n;
	unsigned int	len;
	unsigned int	words;
	char			**sp;

	i = 0;
	len = 0;
	n = 0;
	words = ft_words_count(s, c);
	sp = (char **)malloc(sizeof(char *) * words + 1);
	if (!sp)
		return (NULL);
	while (i < words)
	{
		x = 0;
		len = ft_lenght(s + n, c);
		sp[i] = (char *)malloc(len + 1);
		if (!sp[i])
			return (ft_free(sp, i));
		while (s[n] == c)
			n++;
		while (s[n] != c)
			sp[i][x++] = s[n++];
		sp[i][x] = '\0';
		i++;
	}
	sp[i] = (NULL);
	return (sp);
}

// int main()
// {
// 	char **sp = ft_split(NULL, ' ');
// 	int i = 0;
// 	while ( i < ft_words_count(NULL , ' '))
// 	{
// 		printf("%s\n", sp[i]);
// 		i++;
// 	}
// }