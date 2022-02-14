/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:05:30 by ybleiel           #+#    #+#             */
/*   Updated: 2022/01/11 11:22:38 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *) dst;
	str2 = (char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		str1[i] = str2[i];
		i++;
		n--;
	}
	return (str1);
}

// int main () 
// {
// 	char src[50] = "Hallllo";
// 	char dest[50] = "Moinnnnnnn";
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, 3);
//    printf("After memcpy dest = %s\n", dest);
//    return(0);
// }