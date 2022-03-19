/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:13 by megrisse          #+#    #+#             */
/*   Updated: 2022/03/18 23:42:21 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include "ft_printf.h"

void	ft_send(char c, pid_t pid)
{
	int	bit;
	int	index;

	bit = 8;
	index = 0;
	while (bit)
	{
		if ((c & 128 >> index))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		bit--;
		index++;
	}
}

int	ft_check_pid(pid_t pid, char *str)
{
	if (kill(pid, 0) < 0)
		return (0);
	if (pid < 1 || ft_strlen(str) > 5)
		return (0);
	else
		return (1);
}

void	ft_error(void)
{
	ft_printf("\033[0;31m");
	ft_printf("Incorrect Pid!\n");
	exit(0);
}

int	main(int argc, char **argv)
{
	int		len;
	pid_t	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		len = ft_strlen(argv[2]) + 1;
		if (!ft_check_pid(pid, argv[1]))
			ft_error();
		else
		{
			signal(SIGUSR1, reply_handler);
			while (len)
			{
				ft_send(*argv[2], pid);
				argv[2]++;
				len--;
			}
			ft_send(0, pid);
		}
	}
	else
		ft_printf("\033[0;33m");
	ft_printf("Not Enough Arguments!\n");
}
