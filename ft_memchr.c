/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:35:14 by thamada           #+#    #+#             */
/*   Updated: 2024/06/02 16:51:39 by thamada          ###   ########.fr       */
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