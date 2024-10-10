/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:23:39 by joroman-          #+#    #+#             */
/*   Updated: 2024/10/03 10:40:34 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	void	*aux_content;

	list = NULL;
	while (lst)
	{
		aux_content = f(lst->content);
		node = ft_lstnew(aux_content);
		if (!node)
		{
			del(aux_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}

// #include <stdio.h>
// #include <stdlib.h>

// void *duplicate_content(void *content)
// {
//     int *dup = malloc(sizeof(int));
//     if (!dup)
//         return NULL;
//     *dup = *(int *)content * 2;  // Duplica el contenido
//     return dup;
// }

// void delete_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *lst1 = ft_lstnew(malloc(sizeof(int)));
//     t_list *lst2 = ft_lstnew(malloc(sizeof(int)));
//     t_list *lst3 = ft_lstnew(malloc(sizeof(int)));

//     if (!lst1 || !lst2 || !lst3)
//         return (1); 

// *(int *)lst1->content = 1;
//     *(int *)lst2->content = 2;
//     *(int *)lst3->content = 3;

//     lst1->next = lst2;
//     lst2->next = lst3;
//     lst3->next = NULL;

//     t_list *mapped_list = ft_lstmap(lst1, duplicate_content, delete_content);

//     t_list *current = mapped_list;
//     while (current)
//     {
//         printf("Valor: %d\n", *(int *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&lst1, delete_content);   // Limpiar lista original
//     ft_lstclear(&mapped_list, delete_content); // Limpiar lista mapeada

//     return 0;
// }
