/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:20:09 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 09:55:13 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for the character 'c' in the string 's'.
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	const char *str1 = "Hello, world!";
// 	printf("1. %s\n", ft_strchr(str1, 'o'));
// 	printf("1. %s\n", strchr(str1, 'o'));
// 	printf("2 %s\n", ft_strchr(str1, 'x'));
// 	printf("2 %s\n", strchr(str1, 'x'));
// 	printf("3 %s\n", ft_strchr(str1, '\0'));
// 	printf("3 %s\n", strchr(str1, '\0'));
// 	printf("5 %s\n", ft_strchr(str1, 1024));
// 	printf("5 %s\n", strchr(str1, 1024));
//     return (0);
// }
