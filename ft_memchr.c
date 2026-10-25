/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmane <adahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:56:02 by adahmane          #+#    #+#             */
/*   Updated: 2026/10/25 09:00:37 by adahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;
	size_t i;

	p = (const unsigned char *)s;
	i = 0;

	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return (void *)(p + i);
		}
		i++;
	}
	return (NULL);
}