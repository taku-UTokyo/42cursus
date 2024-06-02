/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:52:20 by thamada           #+#    #+#             */
/*   Updated: 2024/06/02 17:07:44 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;

	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*arr1 != *arr2)
			return ((int)*arr1 - (int)*arr2);
		arr1++;
		arr2++;
	}
	return (0);
}