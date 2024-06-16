/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:52:25 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:47:17 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	moji;

	moji = (char)c;
	while (*s)
	{
		if (*s == moji)
			return ((char *)s);
		s++;
	}
	if (moji == '\0')
		return ((char *)s);
	return (0);
}
