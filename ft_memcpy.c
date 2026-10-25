/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmane <adahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:23:58 by adahmane          #+#    #+#             */
/*   Updated: 2026/10/24 19:42:02 by adahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	if (!dest && !src)
		return (dest);

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}