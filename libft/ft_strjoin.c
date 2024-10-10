/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:23:24 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/24 21:27:58 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < len1)
		result[i] = s1[i];
	while (++j < len2)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char *s1 = "Hola ";
// 	char *s2 = "Mundo!";
// 	char *r1 = ft_strjoin(s1, s2);
// 	char *s3 = "";
// 	char *s4 = "Mundo!";
// 	char *r2 = ft_strjoin(s3, s4);
// 	char *s5 = NULL;
// 	char *s6 = "Mundo!";
// 	char *r3 = ft_strjoin(s5, s6);
// 	printf("Resultado de ft_strjoin: %s\n", r1);
// 	printf("Resultado de ft_strjoin: %s\n", r2);
// 	printf("Resultado de ft_strjoin: %s\n", r3);
// 	return (0);
// }