/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:28:47 by sleon             #+#    #+#             */
/*   Updated: 2022/05/21 14:28:52 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new_lst;
	t_list	*good_lst;

	good_lst = NULL;
	if (lst == NULL || f == NULL || !d)
		return (NULL);
	while (lst)
	{
		new_lst = ft_lstnew((*f)(lst->content));
		if (new_lst == 0)
		{
			ft_lstclear(&good_lst, d);
			return (0);
		}
		ft_lstadd_back(&good_lst, new_lst);
		lst = lst->next;
	}
	return (good_lst);
}
