/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:46:52 by thamada           #+#    #+#             */
/*   Updated: 2024/06/02 15:50:52 by thamada          ###   ########.fr       */
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
/*
int	main(void)
{
	const char	s[7] = "bonjur";
	int			c;

	c = 98;
	printf("%s\n", ft_strchr(s,c));
}
*/