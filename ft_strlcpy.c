/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:47:14 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/02 10:59:39 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*int main()
{
    char str[] = "September is great";
    char dest[] = "pppppppppppppppp";
    printf("%s\n", dest);
    printf("%d\n", ft_strlcpy(dest, str, 10));
    printf("%s\n", dest);
}*/