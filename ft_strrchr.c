/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:30:28 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/21 13:17:39 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (0);
}

int main () 
{
   const char str[] = "hallo.xd.dx";
   const char ch = '.';
   char *ret;
   ret = ft_strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}