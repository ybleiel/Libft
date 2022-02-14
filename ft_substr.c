/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:29:39 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/02 12:03:07 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(*s) * 1);
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(*s) * len + 1);
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
		if (i >= start && j < len)
			str[j++] = s[i];
	str[j] = 0;
	return (str);
}

/*int main()
{
	char str[] = "0123456789";
	printf("%s\n", ft_substr(str,3,2));
}*/