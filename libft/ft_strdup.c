/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:14:12 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 09:56:48 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Duplicates the string 's' allocating new memory.
char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*aux;

	len = ft_strlen(s);
	aux = malloc(len + 1);
	if (!(aux))
		return (NULL);
	aux[len] = '\0';
	while (len--)
		aux[len] = s[len];
	return (aux);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
//     const char *original = "Hola mundo";  
//     char *dup1;
//     char *dup2;
//
//     dup1 = strdup(original);
//     if (dup1 == NULL)
//     {
//         printf("Error.\n");
//         return 1;
//     }
//
//     dup2 = ft_strdup(original);
//     if (dup2 == NULL)
//     {
//         printf("Error.\n");
//         free(dup1);  
//         return 1;
//     }
//
//
//     printf("Original: %s\n", original);
//     printf("Duplicado con strdup: %s\n", dup1);
//     printf("Duplicado con ft_strdup: %s\n", dup2);
//
//     if (strcmp(dup1, dup2) == 0)
//         printf("TODO OK .\n");
//     else
//         printf("Error.\n");
//     return (0);
// }
