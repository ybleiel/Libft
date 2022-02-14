/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybleiel <ybleiel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:19:49 by ybleiel           #+#    #+#             */
/*   Updated: 2021/12/06 12:20:08 by ybleiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	if (lst == 0)
		return (0);
	i = 1;
	while (lst->next != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
