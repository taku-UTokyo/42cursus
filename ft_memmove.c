/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:11:24 by thamada           #+#    #+#             */
/*   Updated: 2024/06/01 17:20:28 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
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