/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:42:00 by joroman-          #+#    #+#             */
/*   Updated: 2024/10/03 10:10:31 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from the SRC memory to DEST.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*aux_dest;
	const unsigned char	*aux_src;

	if (!dest && !src)
		return (dest);
	aux_dest = (unsigned char *)dest;
	aux_src = (const unsigned char *)src;
	while (n--)
		*aux_dest++ = *aux_src++;
	return (dest);
}
