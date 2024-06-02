/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:54:56 by thamada           #+#    #+#             */
/*   Updated: 2024/06/02 16:04:21 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;
	char		moji;

	start = s;
	s += ft_strlen(s);
	moji = (char)c;
	while (s >= start)
	{
		if (*s == moji)
			return ((char *)s);
		s--;
	}
	return (NULL);
}