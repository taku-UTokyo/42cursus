/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:43:09 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:43:43 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(long long num)
{
	size_t	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = (num - num % 10) / 10;
		count++;
	}
	return (count);
}

static void	getdigitstoarray(char *arr, size_t count, size_t sign,
		long long num)
{
	arr[count] = '\0';
	while (sign < count)
	{
		arr[--count] = num % 10 + '0';
		num = (num - num % 10) / 10;
	}
	if (sign == 1)
		arr[0] = '-';
}

char	*ft_itoa(int n)
{
	size_t		sign;
	size_t		count;
	long long	num;
	char		*arr;

	count = 0;
	sign = 0;
	num = n;
	if (n < 0)
	{
		sign = 1;
		num *= -1;
		count++;
	}
	count += count_digit(num);
	arr = (char *)malloc((count + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	getdigitstoarray(arr, count, sign, num);
	return (arr);
}
