/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:43:14 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/27 12:36:06 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void change(unsigned int i, char *c)
// {
//     if (i % 2 == 0) {
//         *c = ft_toupper(*c); 
//     } else {
//         *c = ft_tolower(*c);  
//     }
// }

// int main()
// {
//     char str[] = "HoLasjjhqweJDHJHSADa MuNdO";
//     ft_striteri(str, change); 
//     printf("Resultado: %s\n", str);

//     return (0);
// }