/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:19:29 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 10:54:24 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	len_s;

	i = -1;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > len_s - start)
		len = len_s - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (++i < len)
		result[i] = s[start + i];
	result[i] = '\0';
	return (result);
}

// int main()
// {
//     char *str = "Hello, World!";
//     char *substr = ft_substr(str, 7, 5); 
//     printf("Substring: %s\n", substr);
//     substr = ft_substr(str, 0, 5);
//     printf("Substring: %s\n", substr);
//     substr = ft_substr(str, 14, 5); 
//     printf("Substring: %s\n", substr);
//     return (0);
// }