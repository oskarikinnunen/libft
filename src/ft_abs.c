/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:53:55 by okinnune          #+#    #+#             */
/*   Updated: 2021/12/20 17:22:37 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*							FT_ABS								*/
/*			Returns the absolute value of the integer n			*/

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}