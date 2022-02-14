/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:13:56 by ybleiel           #+#    #+#             */
/*   Updated: 2022/02/08 16:01:40 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srce;

	dest = (char *) dst;
	srce = (char *) src;
	if (dest <= srce)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		while (len--)
		{
			dest[len] = srce[len];
		}
		return (dest);
	}
}

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 3);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }