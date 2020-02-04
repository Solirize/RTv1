/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:34:07 by sleonia           #+#    #+#             */
/*   Updated: 2020/01/10 18:47:25 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include "libft.h"

typedef struct			s_vector
{
	double				x;
	double				y;
	double				z;
}						t_vector;

t_vector				ft_vec_sum(t_vector a, t_vector b);
double					ft_vec_length(t_vector a);
void					ft_vec_init(t_vector a);
t_vector				ft_vec_multiplication_num(t_vector a, double num);
double					ft_vec_distance(t_vector a, t_vector b);
double					ft_vec_dot(t_vector a, t_vector b);
t_vector				ft_vec_subtract(t_vector a, t_vector b);
double					ft_vec_multiplication(t_vector a, t_vector b,
							double angle);

#endif
