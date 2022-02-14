/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:27:49 by ybleiel           #+#    #+#             */
/*   Updated: 2022/02/01 15:49:33 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int	ft_char(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i] != 0 && ft_char(s[i], c))
		i++;
	while (s[i])
	{
		if ((ft_char(s[i], c) && !ft_char(s[i + 1], c)) || s[i + 1] == '\0')
			word++;
		i++;
	}
	return (word);
}

static int	ft_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while ((s != NULL && s[i]) && j < ft_word(s, c))
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		tab[j] = malloc(sizeof(char) * (ft_len(s, c, i) + 1));
		if (!tab)
			return (NULL);
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j++][k] = '\0';
	}
	tab[j] = NULL;
	return (tab);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main()
// {
// 	int i;
// 	const char tabstr[30] = "hallo sa  cyxdc ycydc wx c";

// 	i = 0;
// 	while (tabstr[i])
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// }

int main()
{
	char str[20] = "hallo , welt";
	printf("%s\n", *ft_split(str, ','));
	return 0;
}