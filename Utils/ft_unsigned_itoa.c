/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:53:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:55:26 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_unsigned_itoa(unsigned int n)
{
	char	temp[12];
	int		index;
	char	*buffer;

	index = 11;
	buffer = NULL;
	temp[index--] = '\0';
	if (n == 0)
		temp[index--] = '0';
	while (n != 0)
	{
			temp[index--] = n % 10 + '0';
			n /= 10;
	}
	buffer = ft_strdup(&temp[index + 1]);
	return (buffer);
}
