/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:26:06 by ybleiel           #+#    #+#             */
/*   Updated: 2021/11/30 12:26:09 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/*int main()
{
	char str[50] = "moin";
	printf("%zu\n",ft_strlen(str));
}*/