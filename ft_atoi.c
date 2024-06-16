/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takurohamada <takurohamada@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:37:14 by takurohamad       #+#    #+#             */
/*   Updated: 2024/06/16 19:34:28 by takurohamad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
		if (ft_isdigit(*str) && ((LONG_MIN + (*str - '0')) / 10 > -result)
			&& (sign < 0))
			return ((int)LONG_MIN);
		else if (ft_isdigit(*str) && ((LONG_MAX - (*str - '0')) / 10 < result)
			&& (sign > 0))
			return ((int)LONG_MAX);
	}
	return (sign * (int)result);
}
