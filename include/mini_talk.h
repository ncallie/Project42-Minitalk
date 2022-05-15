/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_talk.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:32:37 by ncallie           #+#    #+#             */
/*   Updated: 2021/11/13 18:47:12 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_TALK_H
# define MINI_TALK_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void			ft_start(void);
void			ft_get_pid(void);
void			wait_message(void);
void			ft_put_nbr(pid_t pid);
void			handler(int num);
void			message(int pid, char *str);
int				check_argc(int argc);
int				check_pid(char *str);
void			dec_bin(int pid, char c);
int				ft_atoi(const char *str);
unsigned long	check_long(unsigned long number, int neg);

#endif
