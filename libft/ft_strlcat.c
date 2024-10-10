/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:35:54 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 10:23:50 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concatenates 'src' to the end of 'dst' until 'size' bytes.
// Returns length of the two strings.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char dst1[10] = "Hola";

//     printf("%ld\n", ft_strlcat(dst1, "Mundo", 10));
//     printf("%s\n", dst1);
// 	return (0);
// }