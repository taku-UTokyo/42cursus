/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:59:05 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:49:14 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*arr;
	unsigned int	i;
	unsigned int	index;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) <= start + len - 1)
		index = ft_strlen(s) - 1;
	else
		index = start + len - 1;
	arr = (char *)malloc((index - start + 1 + 1) * sizeof(char));
	if (arr != NULL)
	{
		while (i + start <= index)
		{
			arr[i] = s[start + i];
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
