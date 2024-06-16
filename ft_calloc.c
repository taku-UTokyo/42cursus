/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:38:28 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:35:41 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count && size && count > SIZE_MAX / size)
		return (0);
	ptr = (void *)malloc(count * size);
	if (ptr != NULL)
	{
		while (i < count * size)
			((char *)ptr)[i++] = 0;
	}
	return (ptr);
}
