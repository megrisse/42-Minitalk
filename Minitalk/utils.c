/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:01:19 by megrisse          #+#    #+#             */
/*   Updated: 2022/03/18 00:58:04 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "minitalk_bonus.h"
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	count ;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

void	green(void)
{
	ft_printf("\033[0;32m");
}

void	reply_handler(int signum)
{
	green();
	ft_printf("SERVER : MESSAGE RECEIVED\n", signum);
	exit(1);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
