/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:34:11 by ybleiel           #+#    #+#             */
/*   Updated: 2022/02/01 12:45:44 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trm;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	while (*s1 != 0 && ft_strchr(set, *s1) != 0)
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]) != 0)
	{
		i--;
	}
	trm = ft_substr(s1, 0, i + 1);
	return (trm);
}

/*int main()
{
	char str1[] = "abchalabcloabc";
	char str2[] = "a";
	printf("%s\n", ft_strtrim(str1, str2));
}*/