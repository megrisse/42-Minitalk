/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:01:04 by megrisse          #+#    #+#             */
/*   Updated: 2022/03/16 01:37:05 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <time.h>
# include <sys/types.h>
# include <stdlib.h>

void	ft_handle(int sig, siginfo_t *sig_info, void *context);
void	ft_send(char c, pid_t pid);

int		ft_check_pid(pid_t pid, char *str);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);

#endif
