/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:44:06 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/02 11:28:30 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (dst[i] && i < size)
		i++;
	while ((src[a]) && ((i + a + 1) < size))
	{
		dst[i + a] = src[a];
		a++;
	}
	if (i != size)
		dst[i + a] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
    char dest[] = "a";
    ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
	write(1, "\n", 1);
	write(1, dest, 15);
}*/