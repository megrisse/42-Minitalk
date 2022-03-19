/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:37 by megrisse          #+#    #+#             */
/*   Updated: 2022/03/17 20:57:31 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <time.h>
# include <sys/types.h>
# include <stdlib.h>

void	green(void);
void	ft_handle(int sig, siginfo_t *sig_info, void *context);
void	ft_send(char c, pid_t pid);
void	reply_handler(int signum);

int		ft_check_pid(pid_t pid, char *str);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);

#endif
