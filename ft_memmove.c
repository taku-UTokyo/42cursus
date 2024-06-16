/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:46:39 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:45:03 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*m_dest;
	const char	*m_src;

	m_dest = (char *)dest;
	m_src = (const char *)src;
	if (m_dest < m_src)
	{
		while (n--)
			*m_dest++ = *m_src++;
	}
	else if (m_src < m_dest)
	{
		m_dest += n;
		m_src += n;
		while (n--)
			*--m_dest = *--m_src;
	}
	else
		return (dest);
	return (dest);
}
