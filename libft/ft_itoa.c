/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:12:02 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/30 08:50:55 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	unsigned int	num;
	size_t			i;

	i = 1;
	if (n < 0)
	{
		num = -n;
		i++;
	}
	else
		num = n;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*result;
	size_t			len;
	unsigned int	num;

	num = n;
	len = ft_intlen(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		num = -n;
	while (len > 0)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

// #include <stdio.h>
// int main ()
// {
// 	char	*str, *str1, *str2;
// 	str = ft_itoa(2147483647);
// 	str1 = ft_itoa(-2147483648);
// 	str2 = ft_itoa(0);
// 	printf("%s\n", str);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }
