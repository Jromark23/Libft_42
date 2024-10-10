/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:41:01 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 18:34:59 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills N bytes of S with the C value and returns a pointer to 's'.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>
//
// int main() {
//     char str[] = "Hola amigow";
//     char str2[] = "Hola amigow";
//    
//     memset(str, 'X', 6);   
//     ft_memset(str2, 'X', 6);
//    
//     printf("original %s\n", str);
//     printf("copia %s\n", str2);
// 	write(1, str, sizeof(str));
// 	write(1, str, 1);
//     return 0;
// }
