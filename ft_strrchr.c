/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmane <adahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:01:04 by adahmane          #+#    #+#             */
/*   Updated: 2026/10/24 21:27:52 by adahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);

    while (s[i] && i > 0)
    {
        if (s[i] == (char)c)
        {
            return (char *)(s + i);
        }
        i--;
    }
    if (s[0] == (char)c)
        return ((char *)s);
    
    return (NULL);
}