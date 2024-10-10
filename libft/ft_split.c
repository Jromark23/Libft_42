/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:08:48 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 20:25:56 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static void	ft_freall(char **string, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(string[i]);
		i++;
	}
	free(string);
}

static int	ft_create(char **result, const char *s, int index, size_t pos[2])
{
	int		i;
	char	*word;

	word = malloc((pos[0] - index + 1));
	if (!word)
	{
		ft_freall(result, pos[1]);
		return (0);
	}
	i = 0;
	while (index < (int)pos[0])
		word[i++] = s[index++];
	word[i] = '\0';
	result[pos[1]] = word;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	size_t	pos[2];

	pos[0] = 0;
	pos[1] = 0;
	index = -1;
	result = malloc((counter(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	while (pos[0] <= ft_strlen(s))
	{
		if (s[pos[0]] != c && index == -1)
			index = pos[0];
		else if ((s[pos[0]] == c || pos[0] == ft_strlen(s)) && index != -1)
		{
			if (ft_create(result, s, index, pos) == 0)
				return (0);
			index = -1;
			pos[1]++;
		}
		pos[0]++;
	}
	result[pos[1]] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**result;
// 	char	*str = "Hola Mundo!, 42,Madrid,,,    , up to, you.";
// 	char	delimiter = ',';
// 	int		i;
// 	result = ft_split(str, delimiter);
// 	if (!result)
// 	{
// 		printf("Error");
// 		return (1);
// 	}
// 	printf("Prueba:  \"%s\"\n", str);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Palabra %d: %s\n", i, result[i]);
// 		i++;
// 	}
// 	ft_freall(result, i);
// 	return (0);
// }