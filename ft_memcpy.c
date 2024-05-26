/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamada <thamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:12:27 by thamada           #+#    #+#             */
/*   Updated: 2024/05/26 18:58:31 by thamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *memo_dst;
    const char  *memo_src;
    size_t  i;

    memo_dst = (char *)dst;
    memo_src = (const char *)src;
    if (dst == src)
        return(dst);
    i = 0;
    while(n--)
    {
        memo_dst[i] = memo_src[i];
        i++;
    }
    return((void *)memo_dst);
}

int main()
{
    char    dst[20] = "234jbghNNn";
    const   char    *src = "128";

    ft_memcpy(dst, src, 8);
    printf("%s\n", dst);
}