/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:32 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/01 12:10:19 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	a;
	char	*str;

	str = (char *) s;
	a = 0;
	while (a < n)
	{
		str[a] = '\0';
		a++;
	}
}

/*int main () 
{
   char str[50] = "moin";
   ft_bzero(str,2);
   puts(str);
   return(0);
}*/