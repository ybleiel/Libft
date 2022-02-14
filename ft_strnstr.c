/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:17:04 by ybleiel           #+#    #+#             */
/*   Updated: 2022/01/18 10:48:00 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle) > ft_strlen(haystack))
	{
		return (0);
	}
	if (ft_strlen(needle) == 0)
	{
		return ((char *)haystack);
	}
	while (len >= ft_strlen(needle) && *haystack != '\0')
	{
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}

// int main () 
// {
//    const char haystack[20] = "hallowelthallo";
//    const char needle[10] = "welt";
//    char *ret;

//    ret = ft_strnstr(haystack, needle, 20);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }