/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:34:59 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/08 13:03:12 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);

}

/*int main () 
{
   const char str[] = "bonjourno";
   const char ch = 'n';
   char *ret;
   ret = ft_memchr(str, ch, 2);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}*/