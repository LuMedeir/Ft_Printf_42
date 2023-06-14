/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_lowhexa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:20:37 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:53 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_to_lowhexa(unsigned int number)
{
	int		len;
	char	*str;

	str = ft_itoa_base(number, G_HEX_BASE_LOWER);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free (str);
	return (len);
}
