/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:57:00 by sleonia           #+#    #+#             */
/*   Updated: 2019/12/15 05:23:54 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"

void		ft_exit(char *error_text)
{
	ft_putstr("\033[31m");
	ft_putendl(error_text);
	ft_putstr("\033[0m");
	exit(1);
}
