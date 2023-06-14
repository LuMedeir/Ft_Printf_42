/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:04:52 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:11 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	int		size;
	char	*str2;

	size = ft_strlen((char *)str);
	str2 = (char *)str;
	while (size != 0)
	{
		if (str2[size] == (char)c)
			return (&str2[size]);
		size--;
	}
	if (str2[size] == (char)c)
		return (&str2[size]);
	return (0);
}
