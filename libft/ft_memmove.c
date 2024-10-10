/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:59:06 by joroman-          #+#    #+#             */
/*   Updated: 2024/10/03 10:11:42 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*aux_src;
	unsigned char		*aux_dst;

	if (!dest && !src)
		return (dest);
	aux_src = (const unsigned char *)src;
	aux_dst = (unsigned char *)dest;
	if (aux_dst < aux_src)
	{
		while (n--)
			*aux_dst++ = *aux_src++;
	}
	else
	{
		aux_src += n;
		aux_dst += n;
		while (n--)
			*(--aux_dst) = *(--aux_src);
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>  

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Overlap test";
//     char str3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     printf("Prueba 1: Sin solapamiento\n");
//     printf("Antes ft_memmove: %s\n", str1);
//     ft_memmove(str1 + 7, str1, 5);  
//     printf("Después ft_memmove: %s\n", str1);
//     printf("\nPrueba 2: Con solapamiento\n");
//     printf("Antes ft_memmove: %s\n", str2);
//     ft_memmove(str2 + 5, str2, 7);  
//     printf("Después ft_memmove: %s\n", str2);
//     printf("\nPrueba 3: Copiar hacia atrás\n");
//     printf("Antes ft_memmove: %s\n", str3);
//     ft_memmove(str3 + 5, str3 + 10, 10);  
//     printf("Después ft_memmove: %s\n", str3); 
//     char test4[20] = "HelloWorld";
//     char test4_ft[20] = "HelloWorld";
//     printf("\nPrueba 4: Comparación con memmove estándar\n");
//     memmove(test4 + 5, test4, 5);  
//     ft_memmove(test4_ft + 5, test4_ft, 5);  
//     printf("Resultado memmove: %s\n", test4);
//     printf("Resultado ft_memmove: %s\n", test4_ft);

//     return 0;
// }