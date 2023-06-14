/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:43:13 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:23 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itoa(int n)
{
	char	buffer[12];
	int		index;
	char	sinal;

	if (n == 0)
		return (ft_strdup("0"));
	sinal = 0;
	index = 12;
	buffer[--index] = '\0';
	if (n < 0)
	{
		buffer[--index] = (n % 10) * -1 + '0';
		n /= 10;
		n = n * -1;
		sinal = '-';
	}
	while (n != 0)
	{
		buffer[--index] = (n % 10) + '0';
		n /= 10;
	}
	if (sinal == '-')
		buffer[--index] = sinal;
	return (ft_strdup(&buffer[index]));
}
