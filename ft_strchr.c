/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:24:53 by ybleiel           #+#    #+#             */
/*   Updated: 2022/01/14 15:01:21 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *) s);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main () 
// {
//    const char str[] = "hallo.xd.dx";
//    const char c = 'a';
//    printf("%s\n", ft_strchr(str, c));
//    return(0);
// }