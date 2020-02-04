/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_get_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:42:28 by sleonia           #+#    #+#             */
/*   Updated: 2020/01/10 20:27:52 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

t_vector		get_array_value(char *str)
{
	int			i;
	t_vector	point;
	char		**str_split;

	i = 0;
	while (*str && (!ft_isnumber(*str)))
		str++;
	if (!(str_split = ft_strsplit(str, ',')))
		ft_exit(ERROR_STRSPLIT);
	if (ft_len_arr(str_split) > 3 || ft_len_arr(str_split) < 3)
		ft_exit(ERROR_INPUT);
	point.x = ft_atof(str_split[0]);
	point.y = ft_atof(str_split[1]);
	point.z = ft_atof(str_split[2]);
	ft_destroy_string_arr(str_split);
	return (point);
}

float			get_float_value(char *str)
{
	float		value;
	char		**str_split;

	while (*str && !ft_isdigit(*str))
		str++;
	value = ft_atof(str);
	return (value);
}

float			get_int_value(char *str)
{
	int			value;
	char		**str_split;

	while (*str && !ft_isdigit(*str))
		str++;
	value = ft_atoi(str);
	return (value);
}
