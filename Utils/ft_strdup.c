/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:51:06 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:07 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strdup(char *str)
{
	char	*str1;
	char	*dest;
	int		count;

	str1 = str;
	dest = malloc((ft_strlen(str1) + 1) * sizeof(char));
	count = 0;
	if (dest == NULL)
		return (0);
	while (str1[count] != '\0')
	{
		dest[count] = str1[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
