/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:01 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:56 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_to_decimal(int number)
{
	int		len;
	char	*str;

	str = ft_itoa(number);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free (str);
	return (len);
}
