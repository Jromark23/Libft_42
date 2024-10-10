/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:03:48 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 09:32:31 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches the character 'c' in the first 'n' bytes of the memory block 's'.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = (const unsigned char *)s;
	while (n--)
		if (*src++ == (const unsigned char)c)
			return ((void *)--src);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
//     char str[] = "Hola, amigo";
//     size_t n = strlen(str);
//
//     char *result = ft_memchr(str, 'w', n);
// 	char *result2 = memchr(str, 'w', n);
//
//     if (result != NULL)
//         printf("encontrado\n");
//     else
//         printf("no encontrado.\n");
// 	if (result2 != NULL)
//         printf("encontrado\n");
//     else
//         printf("no encontrado.\n");
//     return (0);
// }