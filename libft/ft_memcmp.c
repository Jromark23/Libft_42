/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:54:44 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/25 18:07:10 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares the first 'n' bytes of 's1' and 's2'.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*left;
	const unsigned char	*right;

	left = (const unsigned char *)s1;
	right = (const unsigned char *)s2;
	while (n--)
	{
		if (*left != *right)
			return (*left - *right);
		left++;
		right++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	char str[] = "Hola amiga";
//     char str2[] = "Hola amiga";
//
//     int x = memcmp(str, str2, 16);   
//     int y = ft_memcmp(str, str2, 16);
//
//     printf("original %d\n", x);
//     printf("copia %d\n", y);
//
//     return 0;
// }