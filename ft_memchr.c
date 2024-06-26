/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:44:50 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:44:08 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*arr;
	unsigned char		ch;

	arr = (unsigned const char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*arr == ch)
			return ((void *)arr);
		arr++;
	}
	return (NULL);
}
