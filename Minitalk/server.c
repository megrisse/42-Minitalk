/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:04:13 by megrisse          #+#    #+#             */
/*   Updated: 2022/03/16 01:32:10 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"

int	g_pid;

void	ft_handle(int sig, siginfo_t *sig_info, void *context)
{
	static char	ascii;
	static int	index;

	(void)context;
	if (g_pid != sig_info->si_pid && sig_info->si_pid != 0)
	{
		ascii = 0;
		index = 0;
		g_pid = sig_info->si_pid;
	}
	if (sig == SIGUSR1)
		ascii = ascii << 1 | 1;
	else if (sig == SIGUSR2)
		ascii = ascii << 1 | 0;
	index++;
	if (index == 8)
	{
		write(1, &ascii, 1);
		ascii = 0;
		index = 0;
	}
}

int	main(void)
{
	struct sigaction	sig;
	pid_t				pid;

	sig.sa_sigaction = ft_handle;
	sig.sa_flags = SA_SIGINFO;
	pid = getpid();
	ft_printf("SERVER PID : %d\n", pid);
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}
