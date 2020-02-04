/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 07:25:24 by sleonia           #+#    #+#             */
/*   Updated: 2019/11/12 22:21:57 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static ssize_t	ft_len_nbr(int nbr)
{
	ssize_t		len;

	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		++len;
	}
	return (len);
}

static double	calc_mantissa(const char *str, int i)
{
	ssize_t		mantissa;

	mantissa = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		mantissa = mantissa * 10 + (str[i] - '0');
		i++;
	}
	return (mantissa / (double)pow(10, ft_len_nbr(mantissa)));
}

static int		check_sign(int sign, char symb)
{
	if (symb == '-' && sign == 0)
		sign = -1;
	else if (symb == '-' && sign == -1)
		return (0);
	else if (symb == '-' && sign == 1)
		return (0);
	else if (symb == '+' && sign == 0)
		sign = 1;
	else if (symb == '+' && sign == -1)
		return (0);
	else if (symb == '+' && sign == -1)
		return (0);
	return (sign);
}

double			ft_atof(const char *str)
{
	int			i;
	int			sign;
	double		nbr;

	i = -1;
	sign = 0;
	nbr = 0;
	while (str[++i])
	{
		if (str[i] == '.' || (str[i] >= '0' && str[i] <= '9'))
			break ;
		else if ((sign = check_sign(sign, str[i])) == 0)
			return (nbr);
	}
	if (sign == 0)
		sign = 1;
	while (str[i] == '.' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '.')
			return (sign * (nbr + calc_mantissa(str, i + 1)));
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * sign);
}

