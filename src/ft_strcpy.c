/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:36:56 by okinnune          #+#    #+#             */
/*   Updated: 2022/08/01 22:06:20 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)dest)[i] = '\0';
	return (dest);
}
