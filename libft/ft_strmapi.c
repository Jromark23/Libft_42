/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:52:47 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 12:45:36 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Apply a function to each char of 's'. Creates one string with the result.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;
	size_t				len;

	i = 0;
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	change(unsigned int i, char c)
// {
//     if (i % 2 == 0) {
//         return ft_toupper(c);
//     } else {
//         return ft_tolower(c);
//     }
// }

// int main()
// {
//     char str[] = "HoLa sjdhghSJHD MuNdO";
//     char *new_str = ft_strmapi(str, change);

//     if (new_str != NULL) {
//         printf("Cadena original: %s\n", str);
//         printf("Cadena modificada: %s\n", new_str);
//     } else {
//         printf("Error al asignar memoria.\n");
//     }
//     return (0);
// }