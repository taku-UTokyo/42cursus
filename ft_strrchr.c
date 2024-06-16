/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:58:13 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:48:52 by takurohamad      ###   ########.fr       */
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
