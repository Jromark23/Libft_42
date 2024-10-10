/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:37:14 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 18:54:03 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new_node)
{
	t_list	*aux;

	if (!*head)
	{
		*head = new_node;
		return ;
	}
	aux = *head;
	while (aux->next)
		aux = aux->next;
	aux->next = new_node;
}
